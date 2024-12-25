a, b = map(int, input().split())

a = 100 - a
b = 100 - b
c = 100 - (a + b)
d = a * b
q = 0
r = d
c_result = c
if d >= 100:
    q = d // 100
    r = d % 100
    c_result = c + q

print(a, b, c, d, q, r)
print(c_result, r)
