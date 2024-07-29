n = int(input())

while True:
    if n == 1:
        print("1")
        exit(0)
    if n % 2 == 1:
        print("0")
        exit(0)
    n /= 2