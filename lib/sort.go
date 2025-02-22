package lib

import (
	"log"
	"os"
)

func SortFiles(workingPath string, targetDirPath string, sortableFiles []os.DirEntry) {
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
