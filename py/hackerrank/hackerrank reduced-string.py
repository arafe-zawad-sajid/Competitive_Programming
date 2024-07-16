def superReducedString(string):
    limit = len(string)-2
    reduced = string
    index = 0
    while index <= limit:
        now = reduced[index]
        next = reduced[index+1]
        if now == next:
            reduced = reduced.replace(now+next, '', 1)
            index=0
            limit-=2
            continue
        else:
            index+=1
    if reduced == '':
        return 'Empty String'
    else:
        return reduced

print(superReducedString(input()))
