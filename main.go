package main

import (
	"fmt"
	"github.com/rhysez/trove/lib"
	"os"
)

func main() {
	fmt.Println("Trove version 1.0")
	workingPath := "tmp/"

	var sortableFiles []os.DirEntry = lib.CollateDirFiles(workingPath)

	subDirName := "subdir"
	var newDirPath string = lib.SpawnDir(workingPath, subDirName)

	lib.SortFiles(workingPath, newDirPath, sortableFiles)
}
