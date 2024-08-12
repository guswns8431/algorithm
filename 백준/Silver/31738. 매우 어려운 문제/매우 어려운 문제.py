import sys

n, m = map(int, sys.stdin.read().split())

if n >= m:
    # 만약 n이 m 이상이면, n!은 m으로 나눈 나머지가 0이 됨
    print(0)
else:
    result = 1
    for i in range(2, n + 1):
        result = (result * i) % m
    print(result)