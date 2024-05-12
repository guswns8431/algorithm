a, b, c = map(int, input().split())

max_value = max(a, b, c)
remain_value = a + b + c - max_value

if remain_value > max_value:
    print(a + b + c)
else:
    print(remain_value * 2 - 1)
