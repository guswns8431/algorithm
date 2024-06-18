a, b = map(int, input().split())

tmp_a = int(a / 2)
tmp_b = b

if tmp_a > tmp_b:
    print(tmp_b)
else:
    print(tmp_a)