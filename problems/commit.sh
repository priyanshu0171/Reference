#!/bin/bash
rm -f {*.exe,.*.exe}
git add .
git commit -m "new changes made to the reference"
git push -f origin master
GREEN='\033[0;32m'
printf "\n***************************\n${GREEN}Git Hub Commit Successful!!\n***************************\n" 