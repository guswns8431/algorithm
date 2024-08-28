d, h, m = map(int, input().split())

if d < 11:
    print("-1")
    exit(0)
elif d == 11 and h < 11:
    print("-1")
    exit(0)
elif d == 11 and h == 11 and m < 11:
    print("-1")
    exit(0)
print((d - 11) * 24 * 60 + (h - 11) * 60 + m - 11)