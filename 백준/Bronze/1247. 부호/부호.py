for i in range(3):
    SUM = 0
    n = int(input())
    for j in range(n):
        SUM += int(input())
    if (SUM == 0):
        print(0)
    elif (SUM < 0):
        print("-")
    else:
        print("+")
