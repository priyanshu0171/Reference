#!/bin/bash
YELLOW='\033[0;33m'
RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' 
printf "${RED}Deleting .EXE Files...\n\n${YELLOW}"
rm -f {*.exe,.*.exe}
printf "${YELLOW}Adding Changes to .git${NC}\n\n"
git add .
printf "${YELLOW}Commiting changes to GitHub in ${RED}<MASTER>${YELLOW} Branch\n\n${NC}"
git commit -m "new changes made to the reference"
git push -f origin master
printf "${NC}\n***************************\n${GREEN}Git Hub Commit Successful!!${NC}\n***************************\n" 