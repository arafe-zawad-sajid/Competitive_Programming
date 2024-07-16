t = int(input())

while t > 0:
    str = input()
    ab = str.split()
    a = int(ab[0])
    b = int(ab[1])

    if a > b:
        print('>')
    elif a < b:
        print('<')
    else:
        print('=')

    t = t - 1
