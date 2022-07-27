#!/bin/bash
YELLOW='\033[0;33m'
printf "${YELLOW}Deleting .EXE Files...\n\n"
rm -f {*.exe,.*.exe}
git add .
git commit -m "new changes made to the reference"
git push -f origin master
GREEN='\033[0;32m'
NC='\033[0m' 
printf "${NC}\n***************************\n${GREEN}Git Hub Commit Successful!!${NC}\n***************************\n" 