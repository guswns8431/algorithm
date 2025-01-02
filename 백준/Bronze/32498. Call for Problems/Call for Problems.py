n = int(input())
answer = 0
for _ in range(n):
    user_input = int(input())
    if user_input % 2 == 1:
        answer += 1
print(answer)