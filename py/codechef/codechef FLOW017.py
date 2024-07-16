T = int(input())
while T > 0:
    numlist = map(int, input().split())
    print(sorted(numlist)[1])
    T -= 1
