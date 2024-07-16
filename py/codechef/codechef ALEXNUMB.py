t = int(input())
while t > 0:
    num = int(input())
    input()
    ans = 0
    while num > 1:
        num-=1
        ans+=num
    print(ans)
    t-=1
