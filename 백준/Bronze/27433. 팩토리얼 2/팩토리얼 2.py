n = int(input())

answer = 1

if n == 0:
    print(answer)
    exit()
for i in range(n):
    answer *= (i + 1)
print(answer)