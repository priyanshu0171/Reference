#!/bin/bash
rm -f {*.exe,.*.exe}
git add .
git commit -m "new changes made to the reference"
git push -f origin master
RED='\033[0;31m'
printf "${RED}Success!!" 