package lib

import (
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
		FilesCategorised{"Images", make([]os.DirEntry, 0)},
		FilesCategorised{"Docs", make([]os.DirEntry, 0)},
		FilesCategorised{"Audio", make([]os.DirEntry, 0)},
		FilesCategorised{"Video", make([]os.DirEntry, 0)},
		FilesCategorised{"Archives", make([]os.DirEntry, 0)},
		FilesCategorised{"Fonts", make([]os.DirEntry, 0)},
		FilesCategorised{"Application", make([]os.DirEntry, 0)},
		FilesCategorised{"Misc", make([]os.DirEntry, 0)},
	}

}
