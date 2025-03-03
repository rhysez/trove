#!/bin/bash

# To give permissions, run chmod +x pop_dir.sh
# This script creates the testing directory tmp.
# It is used to demonstrate Trove's functionality or to test it.

if [ -d ../tmp ]
then
  echo "tmp directory present"
else
  mkdir ../tmp
fi

cd ../tmp && touch test.jpg test.png test.mp4 test.mp3 test.docx