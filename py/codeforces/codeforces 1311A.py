t = int(input())
while t > 0:
    a, b = map(int, input().split())
    if a == b:
        print(0)
    elif a < b:
        diff = b - a
        if diff % 2 == 0:
            print(2)
        else:
            print(1)
    else:
        diff = a - b
        if diff % 2 == 0:
            print(1)
        else:
            print(2)
    t -= 1
