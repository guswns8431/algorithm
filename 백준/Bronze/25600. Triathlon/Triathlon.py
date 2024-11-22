n = int(input())
max_value = 0

for _ in range(n):
    a, d, g = map(int, input().split())
    if a == d + g:
        tmp = (a * (d+g)) * 2
    else:
        tmp = a * (d+g)
    max_value = max(tmp, max_value)
print(max_value)
