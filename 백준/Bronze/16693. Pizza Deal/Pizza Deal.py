import math

a, p1 = map(int, input().split())
r1, p2 = map(int, input().split())

if a / p1 > (r1 * r1 * math.pi) / p2:
    print("Slice of pizza")
else:
    print("Whole pizza")