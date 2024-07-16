def calculateArea(radius):
    pi = 3.14159
    area = pi * radius * radius
    return area

r = float(input())
a = round(calculateArea(r), 4)
print("A=%.4f" % a)
