def calulateSalary(fixed, sales):
    percentage = 15 / 100
    salary = fixed + (percentage * sales)
    return salary

name = input()
fixed = float(input())
sales = float(input())
salary = calulateSalary(fixed, sales)
print("TOTAL = R$ %.2f" % salary)
