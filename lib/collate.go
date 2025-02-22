package lib

import (
	"log"
	"os"
)

// CollateDirFiles Handles collecting all files within a specified directory.
func CollateDirFiles(path string) []os.DirEntry {
	entries, err := os.ReadDir(path)
	if err != nil {
		log.Fatal(err)
	}

	return entries
}
