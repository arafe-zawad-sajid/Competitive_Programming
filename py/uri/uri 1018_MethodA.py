money = int(input())
moneyprint = money
note_count = {100: 0, 50: 0, 20: 0, 10: 0, 5: 0, 2: 0, 1: 0}
note_count_list = note_count.items()
note_count_list = sorted(note_count_list, reverse=True)

for k, v in note_count_list:
    while money - k >= 0:
        note_count[k] = note_count[k] + 1
        money = money - k

note_count_list = note_count.items()
note_count_list = sorted(note_count_list, reverse=True)

print(moneyprint)
for k, v in note_count_list:
    print(v, 'nota(s) de R$ ' + str(k) + ',00')
