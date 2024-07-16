import math

def distancePoints(x1, y1, x2, y2):
    diffx = x2 - x1
    diffy = y2 - y1
    return (math.sqrt((diffx * diffx) + (diffy * diffy)))

str1 = input()
spt1 = str1.split()
x1 = float(spt1[0])
y1 = float(spt1[1])
str2 = input()
spt2 = str2.split()
x2 = float(spt2[0])
y2 = float(spt2[1])

print("%.4f" %distancePoints(x1, y1, x2, y2))
