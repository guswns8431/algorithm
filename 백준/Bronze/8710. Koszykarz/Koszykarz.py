k, w, m = map(int, input().split())

if (w - k) % m > 0:
    print((w - k) // m + 1)
else:
    print((w - k) // m)