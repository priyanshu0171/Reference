def stringSum(s):
    mp = dict()
    j = 1
    alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    for i in range(26):
        mp[alp[i]] = j
        j*=10
    sum = 0
    for i in range(len(s)):
        sum = mp[s[i].upper()] + sum
    return sum
s = input()
print(stringSum(s))