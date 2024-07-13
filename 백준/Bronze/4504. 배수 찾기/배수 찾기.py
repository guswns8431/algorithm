n = int(input())

while True:
    tmp = int(input())
    if tmp == 0:
        break
    if tmp % n == 0:
        print(f'{tmp} is a multiple of {n}.')
    else:
        print(f'{tmp} is NOT a multiple of {n}.')