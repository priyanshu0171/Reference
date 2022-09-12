# Write a method which will remove a # character from String 
from sys import stdin, stdout

class Solution:
    def removeHash(self, oldString) -> str:
        newString = str(oldString).replace("#","")
        return newString

# driver Code 
def main():
    s = Solution()
    STR = stdin.readline().strip()
    newStr = s.removeHash(STR)
    stdout.write(newStr)

if __name__ == "__main__":
    main()