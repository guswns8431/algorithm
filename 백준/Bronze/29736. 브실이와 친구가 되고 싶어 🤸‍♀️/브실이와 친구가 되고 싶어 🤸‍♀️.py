a, b = map(int, input().split())
k, x = map(int, input().split())

if min(k + x, b) - max(k - x, a) + 1 <= 0:
    print("IMPOSSIBLE")
else:
    print(min(k + x, b) - max(k - x, a) + 1)