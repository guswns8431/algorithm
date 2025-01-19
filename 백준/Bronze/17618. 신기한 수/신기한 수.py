n = int(input())

answer = 0
for i in range(1, n + 1):
    num = 0
    for j in str(i):
        num += int(j)
    if i % num == 0:
        answer += 1
print(answer)