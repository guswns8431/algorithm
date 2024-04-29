T = int(input())

for i in range(T):
    s = input()
    SUM = 0
    index = 0
    for j in range(65, 91):
        if chr(j) not in s:
            SUM += j
    print(SUM)
