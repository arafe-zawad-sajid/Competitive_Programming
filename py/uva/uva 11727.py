t = int(input())
i = 1
while i <= t:
    salary_list = input().split()
    salary_list = sorted(salary_list)
    print('Case ' + str(i) + ': ' + salary_list[1])

    i = i + 1
