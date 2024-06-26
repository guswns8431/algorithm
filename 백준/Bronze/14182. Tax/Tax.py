while True:
    n = int(input())
    if n == 0:
        break
    if n <= 1000000:
        n = n
    elif n > 1000000 and n <= 5000000:
        n *= 0.9
    else:
        n *= 0.8
    print(int(n))