package lib

import (
	"log"
	"os"
)

// SpawnDir Handles spawning a new directory within the current working directory.
func SpawnDir(workingPath string, name string) string {
	newPath := workingPath + name

	// Use os.Stat to check if the directory exists.
	_, err := os.Stat(newPath)

	// If err is nil, this means the directory exists (os.Stat returned true).
	// So we can let the user know and return the path.
	if err == nil {
		log.Default().Printf("The directory named %s already exists, skipping...", newPath)
		return newPath
	}

	// If the error is anything but os.IsNotExist, we exit the program early.
	// This is because we don't want our program exiting if the directory does not exist,
	// As we'd want to create the directory anyway.
	if !os.IsNotExist(err) {
		log.Fatal("Error checking directory:", err)
		return ""
	}

	// If we reach this point, we know the directory does not exist
	// So we can safely create it.
	err = os.Mkdir(newPath, 0755)
	if err != nil {
		log.Fatal(err)
	}

	log.Printf("Created directory: %s\n", newPath)

	return newPath
}
