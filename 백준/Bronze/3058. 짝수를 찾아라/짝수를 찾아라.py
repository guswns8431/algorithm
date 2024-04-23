n = int(input())

for i in range(n):
    SUM = 0
    MIN = 101
    temp = list(map(int, input().split()))
    for j in range(7):
        if temp[j] % 2 == 0:
            if temp[j] < MIN:
                MIN = temp[j]
            SUM += temp[j]
    print(SUM, MIN)
