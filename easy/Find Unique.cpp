import sys

def findUnique(arr, n) :
    #Your code goes here
    lst = {}
    for i in range(n):
        if arr[i] not in lst:
            lst[arr[i]] = 1
        else:
            lst[arr[i]] += 1
    for i in lst.keys():
        if lst[i] == 1:
            return i





















#Taking Input Using Fast I/O
def takeInput() :
    n = int(sys.stdin.readline().rstrip())

    if n == 0 :
        return list(), 0

    arr = list(map(int, sys.stdin.readline().rstrip().split(" ")))
    return arr, n


#main
t = int(sys.stdin.readline().rstrip())

while t > 0 :

    arr, n = takeInput()
    print(findUnique(arr, n))

    t -= 1
