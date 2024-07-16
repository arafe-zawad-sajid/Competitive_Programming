t = int(input())
numlist = []
while t > 0:
    numlist.append(int(input()))
    t -= 1
[print(x) for x in sorted(numlist)]
