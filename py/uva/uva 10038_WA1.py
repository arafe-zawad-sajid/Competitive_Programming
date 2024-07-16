# Jolly Jumpers
input_list = input().split()
n = int(input_list[0])

if n == 1:
    print('Jolly')
else:
    diff_list = list()

    i = 1
    while i < n:
        diff_list.append(abs(int(input_list[i]) - int(input_list[i+1])))
        i = i + 1

    diff_list.sort()

    i = 1
    jolly = True
    for val in diff_list:
        if val != i:
            jolly = False
            break
        i = i + 1

    if jolly is True:
        print('Jolly')
    else:
        print('Not jolly')
