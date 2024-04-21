t = int(input())
for i in range(t):
    temp = input()
    n = int(input())
    SUM = 0
    for i in range(n):
        a = int(input())
        SUM += a
    if SUM % n == 0:
        print("YES")
    else:
        print("NO")