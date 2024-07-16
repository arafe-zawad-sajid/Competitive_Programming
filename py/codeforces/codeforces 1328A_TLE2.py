t = int(input())
while t>0:
    a, b = map(int, input().split())
    if b>a:
        print(b-a)
    elif b==1 or a==b or (a % b)==0:
        print(0)
    else:
        multiplier=2
        while True:
            multiple = multiplier*b
            if multiple>a:
                print(multiple-a)
                break
            multiplier+=1
    t-=1
