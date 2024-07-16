def list_evens(range):
    evens = []
    num = 1
    while num <= range:
        if (num % 2) == 0:
            evens.append(num)
        num += 1
    return evens

def list_odds(range):
    odds = []
    num = 1
    while num <= range:
        if (num % 2) != 0:
            odds.append(num)
        num += 1
    return odds

range, pos = map(int, input().split())
var = 0
if (range % 2) == 0:
    var = int(range/2)
else:
    var = int(range/2)+1
if pos <= var:
    odds = list_odds(range)
    print(odds[pos-var-1])
else:
    evens = list_evens(range)
    print(evens[pos-var-1])
