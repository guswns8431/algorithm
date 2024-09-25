n = int(input())

for i in range(n * 5):
    if i + 1 <= n:
        print("@" * n * 5)
    else:
        print("@" * n)