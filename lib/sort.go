package lib

import (
	"fmt"
	"github.com/h2non/filetype"
	"github.com/rhysez/trove/constants"
	"log"
	"os"
)

// SortFiles
// This function will need to be re-written to account for sorting file types into respective directories.
func SortFiles(workingPath string, targetDirPath string, sortableFiles []os.DirEntry) {
	// Note:
	// In Go, you are able to add a variable declaration before an if statement's condition.
	// Below, we assign err to os.Open(targetDirPath).
	// We add a separator ";", and then provide our if condition, which is os.IsNotExist(err).
	// In simple terms, we're declaring err, then using err in our condition.
	if _, err := os.Open(targetDirPath); os.IsNotExist(err) {
		log.Fatal("The directory named", targetDirPath, "does not exist")
	} else {
		for _, file := range sortableFiles {
			fileInfo, err := os.Stat(workingPath + file.Name())
			if err != nil {
				log.Fatal(err)
			}
			if fileInfo.IsDir() {
				log.Default().Printf("%s is a directory, skipping...", file.Name())
			} else {
				log.Default().Printf("Sorting %s", file.Name())
				MoveFile(targetDirPath, workingPath, file.Name())
			}
		}
	}
}

func InterimSort(workingPath string, sortableFiles []os.DirEntry) {
	type FilesCategorised struct {
		destination string
		files       []os.DirEntry
	}

	var filesByCategory = [8]FilesCategorised{
		{constants.DIR_NAME_IMAGES, make([]os.DirEntry, 0)},
		{constants.DIR_NAME_DOCUMENTS, make([]os.DirEntry, 0)},
		{constants.DIR_NAME_AUDIO, make([]os.DirEntry, 0)},
		{constants.DIR_NAME_VIDEO, make([]os.DirEntry, 0)},
		{constants.DIR_NAME_ARCHIVES, make([]os.DirEntry, 0)},
		{constants.DIR_NAME_FONTS, make([]os.DirEntry, 0)},
		{constants.DIR_NAME_APPLICATION, make([]os.DirEntry, 0)},
		{constants.DIR_NAME_MISC, make([]os.DirEntry, 0)},
	}

	for _, file := range sortableFiles {
		for _, category := range filesByCategory {
			reading, err := os.ReadFile(workingPath + file.Name())
			// readingInfo purely exists to check if file is a directory
			readingInfo, errInfo := os.Stat(workingPath + file.Name())
			if errInfo != nil {
				log.Fatal(errInfo)
			}
			if readingInfo.IsDir() {
				continue
			} else {
				if err != nil {
					log.Fatal(err)
				}

				if filetype.IsImage(reading) {
					_, err := os.Stat(workingPath + constants.DIR_NAME_IMAGES)
					imagesDirPath := workingPath + constants.DIR_NAME_IMAGES
					// Directory already exists.
					if err == nil {
						MoveFile(imagesDirPath, workingPath, file.Name())
						continue
					} else {
						SpawnDir(workingPath, constants.DIR_NAME_IMAGES)
						MoveFile(imagesDirPath, workingPath, file.Name())
					}
				}

				if file.Name() == "silly" {
					fmt.Println(category.destination)
				}
			}
		}
	}
}
