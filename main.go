package main

import (
	"fmt"
	"github.com/rhysez/trove/constants"
	"github.com/rhysez/trove/lib"
	"os"
)

func main() {
	fmt.Println("Trove version 1.0")

	var workingPath string = lib.AutoFormatDirArg(os.Args)
	var sortableFiles []os.DirEntry = lib.CollateDirFiles(workingPath)

	subDirName := constants.DIR_NAME_TEST
	var newDirPath string = lib.SpawnDir(workingPath, subDirName)

	lib.SortFiles(workingPath, newDirPath, sortableFiles)
}
