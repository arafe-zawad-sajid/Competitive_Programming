string = input()
flag = True
for char in string[1:]:
    if char.islower():
        flag = False
        print(string)
        break
new = ''
if flag:
    for char in string:
        if char.islower():
            new += char.upper()
        else:
            new += char.lower()
    print(new)
