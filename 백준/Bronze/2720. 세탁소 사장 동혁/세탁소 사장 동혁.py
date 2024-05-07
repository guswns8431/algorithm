test_case = int(input())

remain = [0] * 4

for i in range(test_case):
    c = int(input())
    remain[0] = c // 25
    c %= 25
    remain[1] = c // 10
    c %= 10
    remain[2] = c // 5
    c %= 5
    remain[3] = c
    print(remain[0], remain[1], remain[2], remain[3], sep=' ')