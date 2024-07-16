range, pos = map(int, input().split())
var = 0
if (range % 2) == 0:
    var = int(range/2)
else:
    var = int(range/2)+1
if pos <= var:
    print((pos*2)-1)
else:
    print(2*(pos-var))
