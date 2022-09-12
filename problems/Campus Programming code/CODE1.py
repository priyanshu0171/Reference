# Write a program to check palindrom string
from sys import stdin, stdout

def main():
    s = stdin.readline().strip()
    if s[::-1] == s:
        stdout.write("String is Palindrome")
    else:
        stdout.write("String is not Plaindrome")

if __name__ == "__main__":
    main()