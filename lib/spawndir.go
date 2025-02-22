package lib

import (
	"log"
	"os"
)

// SpawnDir Handles spawning a new directory within the current working directory.
func SpawnDir(workingPath string, name string) string {
	newPath := workingPath + name

	if _, err := os.Open(newPath); os.IsExist(err) {
		log.Fatal("The directory named", newPath, "already exists, skipping...")
		return newPath
	}

	err := os.Mkdir(newPath, 0755)
	if err != nil {
		log.Fatal(err)
	}

	log.Default().Printf("Created directory: %s\n", newPath)

	return newPath
}
