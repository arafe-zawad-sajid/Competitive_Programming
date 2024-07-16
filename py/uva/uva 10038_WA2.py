# Jolly Jumpers
lst = input().split()
n = int(lst[0])

diff_list = list()
i = 1
while i < n:
    diff_list.append(abs(int(lst[i]) - int(lst[i+1])))
    i = i + 1

total = sum(diff_list)

a = 1
d = 1
n = n - 1

check = (n * (2 * a + (n - 1) * d)) / 2

if total == check:
    print('Jolly')
else:
    print('Not jolly')
# wrong logic
