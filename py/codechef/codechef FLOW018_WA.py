# factorial of 0 is 1
t = int(input())
while t > 0:
    num = int(input())
    if num == 0:
        print(0)
        continue
    fact = num
    while num > 1:
        num-=1
        fact*=num
    print(fact)
    t-=1
