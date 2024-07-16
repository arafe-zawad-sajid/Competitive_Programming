# factorial of 0 is 1
def rec_factorial(num):
    if num == 1:
        return 1
    else:
        return (num * rec_factorial(num-1))

t = int(input())
while t > 0:
    num = int(input())
    ans = rec_factorial(num)
    print(str(ans))
    t-=1
