#!/bin/bash

# To give execute permissions, run chmod +x pop_dir.sh
# This script creates the testing directory tmp and populates it with dummy files.
# It can be used to demonstrate or test Trove's functionality.

if [ -d ../tmp ]
then
  rm -rf ../tmp
  mkdir ../tmp
else
  mkdir ../tmp
fi

cd ../tmp && touch test.jpg test.png test.mp4 test.mp3 test.docx test.epub test.json test.azw test.mobi