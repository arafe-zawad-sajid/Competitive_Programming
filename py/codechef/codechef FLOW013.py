t = int(input())
while t>0:
    a, b, c = map(int, input().split())
    if (a+b+c)==180:
        print('YES')
    else:
        print('NO')
    t-=1
