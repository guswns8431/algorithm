import sys

n = int(sys.stdin.readline())
answer = [0] * 10001

for i in range(n):
    x = int(sys.stdin.readline())
    answer[x] += 1

for i in range(1, len(answer)):
    if answer[i] > 1:
        for j in range(int(answer[i])):
            print(i)
    elif answer[i] == 1:
        print(i)