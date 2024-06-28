import sys

rows, cols = map(int,sys.stdin.readline().split())
A = []
B = []
for i in range(rows):
    A.append(list(map(int, input().split())))
b_rows, b_cols = map(int,sys.stdin.readline().split())
for i in range(b_rows):
    B.append(list(map(int,sys.stdin.readline().split())))
for row in range(rows):
    for i in range(b_cols):
        val = 0
        for j in range(b_rows):
            val += A[row][j] * B[j][i]
        print(val, end=" ")
    print()