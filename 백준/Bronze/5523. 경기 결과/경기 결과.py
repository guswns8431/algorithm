import sys

n = int(sys.stdin.readline())

a_score = 0
b_score = 0
for _ in range(n):
    a, b = map(int, sys.stdin.readline().split())
    if a > b:
        a_score += 1
    elif b > a:
        b_score += 1
print(a_score, b_score)