from sys import stdin, stdout
def get_ints(): return map(int, stdin.readline().split())
def get_lists(): return list(map, stdin.readline().strip().split())

def get_string(): return stdin.readline().strip()

# main function
def main():
    a,b = get_ints()
    stdout.write(str(max(a,b)))
    

if __name__ == '__main__':
    main()