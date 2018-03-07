#!/bin/bash

if [ -z "$1" ]; then
  echo "error: problem number!"
  exit
fi

CODEPATH="code-finished"
FILENAME=$1.cpp

cp $FILENAME $CODEPATH/$FILENAME
git add $CODEPATH/$FILENAME
git commit -m "Finish $FILENAME"
