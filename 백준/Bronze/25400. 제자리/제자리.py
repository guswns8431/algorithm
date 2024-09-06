n = int(input())

answer = 0
numbers = list(map(int, input().split()))

tmp = 0

for i in range(len(numbers)):
    if numbers[i] != i + 1 - tmp:
        answer += 1
        tmp += 1
print(answer)