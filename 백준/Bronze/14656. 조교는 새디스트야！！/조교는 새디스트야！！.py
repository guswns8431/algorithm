n = int(input())
user_input = list(map(int, input().split()))
answer = 0

for i in range(n):
    if i + 1 != user_input[i]:
        answer += 1
print(answer)