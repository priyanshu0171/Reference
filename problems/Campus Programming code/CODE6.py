def oddsum(a):
    sum = 0
    for i in range(len(a)):
        if i%2!=0:
            sum+=a[i]
    return sum

def evensum(a):
    sum = 0
    for i in range(len(a)):
        if i%2==0:
            sum+=a[i]
    return sum

a = list(map(int, input().split()))
print(oddsum(a), end=" ")
print(evensum(a))