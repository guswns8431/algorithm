r, c, n = map(int, input().split())

if r % n == 0:
    row = r // n
else:
    row = r // n + 1
if c % n == 0:
    col = c // n
else:
    col = c // n + 1
print(row * col)