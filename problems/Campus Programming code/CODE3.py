# Write a program to remove a given character from the string
from sys import stdin, stdout

class Solution:
    def removeChar(self, oldString, char) -> str:
        newString = str(oldString).replace(char,"")
        return newString

# driver Code 
def main():
    s = Solution()
    STR,char = map(str, stdin.readline().strip().split())
    newStr = s.removeChar(STR,char)
    stdout.write(newStr)

if __name__ == "__main__":
    main()