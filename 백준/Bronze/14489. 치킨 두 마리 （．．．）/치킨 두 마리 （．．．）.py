A, B = map(int, input().split())
C = int(input())

SUM = A + B
if SUM >= C * 2:
    print(SUM - C * 2)
else:
    print(SUM)