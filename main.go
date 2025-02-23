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
	// lib.InterimSort will handle algorithm step 2
	var testDirPath string = lib.SpawnDir(workingPath, constants.DIR_NAME_TEST)
	// lib.FinalSort will handle algorithm step 3
	lib.SortFiles(workingPath, testDirPath, sortableFiles)
}
