import sys

for line in sys.stdin:
    lst = line.split()
    a = int(lst[0])
    b = int(lst[1])

    print(abs(a - b))
