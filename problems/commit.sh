#!/bin/bash
git add .
git commit -m "new changes made to the reference"
git push -f origin master
rm -f {*.exe,.*.exe}
echo success!! 