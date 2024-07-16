money = int(input())
moneyprint = money

note_list = [100, 50, 20, 10, 5, 2, 1]
count_list = [0, 0, 0, 0, 0, 0, 0]

i = 0
for note in note_list:
    while money - note >= 0:
        money = money - note
        count_list[i] = count_list[i] + 1
    i = i + 1

print(moneyprint)
i = 0
for note in note_list:
    print(str(count_list[i]) + ' nota(s) de R$ ' + str(note_list[i]) + ',00')
    i = i + 1
