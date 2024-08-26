n = int(input())

index = 1
answer = 0
for i in range(1, n):
    answer += n * i + i
print(answer)