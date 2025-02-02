a, b, c, d, e, f = map(int, input().split())
p1 = a * 13 + b * 7 + c * 5 + d * 3 + e * 3 + f * 2
a, b, c, d, e, f = map(int, input().split())
p2 = a * 13 + b * 7 + c * 5 + d * 3 + e * 3 + f * 2 + 1.5

if p1 > p2:
    print("cocjr0208")
else:
    print("ekwoo")