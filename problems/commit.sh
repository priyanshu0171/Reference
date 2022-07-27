#!/bin/bash
YELLOW='\033[0;33m'
RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' 
printf "${RED}Deleting .EXE Files...\n\n${YELLOW}"
rm -f {*.exe,.*.exe}
printf "${YELLOW} Adding Changes to .git${NC}"
git add .
printf "${nc}Commiting changes to GitHub in ${red}<MASTER>${NC} Branch\n\n${NC}"
git commit -m "new changes made to the reference"
git push -f origin master
printf "${NC}\n***************************\n${GREEN}Git Hub Commit Successful!!${NC}\n***************************\n" 