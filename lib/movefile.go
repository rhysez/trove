package lib

import (
	"log"
	"os"
)

// MoveFile Handles moving a file into the target directory.
func MoveFile(targetDirName string, workingPath string, fileName string) {
	permErr := os.Chmod(workingPath+fileName, 0777)
	if permErr != nil {
		log.Fatal(permErr)
	}

	err := os.Rename(workingPath+fileName, targetDirName+"/"+fileName)
	if err != nil {
		log.Fatal(err)
	}
}
