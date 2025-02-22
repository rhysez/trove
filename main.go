package main

import (
	"fmt"
	"github.com/rhysez/trove/lib"
	"log"
	"os"
)

func main() {
	fmt.Println("Trove version 1.0")
	workingPath := "tmp/"

	var filesInDir []os.DirEntry = lib.CollateDirFiles(workingPath)

	subDirName := "subdir"
	var newDirPath string = lib.SpawnDir(workingPath, subDirName)

	if _, err := os.Open(newDirPath); os.IsNotExist(err) {
		log.Fatal("The directory named", newDirPath, "does not exist")
	} else {
		for _, file := range filesInDir {
			fileName := file.Name()
			lib.MoveFile(newDirPath, workingPath, fileName)
		}
	}
}
