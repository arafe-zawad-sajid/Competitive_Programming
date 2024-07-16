def areaOfTriangle(base, height):
    return (0.5 * base * height)

def areaOfCircle(radius):
    pi = 3.14159
    return (pi * radius * radius)

def areaOfTrapezium(base1, base2, height):
    return (((base1 + base2) / 2) * height)

def areaOfSquare(side):
    return (side * side)

def areaOfRectangle(side1, side2):
    return (side1 * side2)

str = input()
lst = str.split()
A = float(lst[0])
B = float(lst[1])
C = float(lst[2])

print("TRIANGULO: %.3f" %areaOfTriangle(A, C))
print("CIRCULO: %.3f" %areaOfCircle(C))
print("TRAPEZIO: %.3f" %areaOfTrapezium(A, B, C))
print("QUADRADO: %.3f" %areaOfSquare(B))
print("RETANGULO: %.3f" %areaOfRectangle(A, B))
