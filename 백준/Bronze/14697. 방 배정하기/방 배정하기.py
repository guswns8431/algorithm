a, b, c, n = map(int, input().split())

for i in range(n + 1):
    for j in range(n + 1):
        for k in range(n + 1):
            if a * i + b * j + c * k == n:
                print("1")
                exit(0)
            if a * i + b * j + c * k > n:
                break
print(0)