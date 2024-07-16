t = int(input())
while t>0:
    a, b = map(int, input().split())
    count = 0
    while (a % b)!=0:
        a+=1
        count+=1
    print(str(count))
    t-=1
