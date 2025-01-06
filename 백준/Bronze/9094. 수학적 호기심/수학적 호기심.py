import sys

t = int(sys.stdin.readline())
for _ in range(t):
    n, m = map(int, sys.stdin.readline().split())
    answer = 0
    for b in range(1, n):
        for a in range(1, b):
            if (a ** 2 + b ** 2 + m) % (a * b) == 0:
                answer += 1
    print(answer)