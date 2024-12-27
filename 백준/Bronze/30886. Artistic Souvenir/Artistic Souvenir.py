import math

a = int(input())

radius = math.sqrt(a / math.pi)

length = (radius + 1) * 2
print(length ** 2)