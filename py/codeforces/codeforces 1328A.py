t = int(input())
while t>0:
    a, b = map(int, input().split())
    if b>a:
        print(b-a)
    elif b==1 or a==b or (a % b)==0:
        print(0)
    else:
        remainder = a % b
        print(b-remainder)
    t-=1
