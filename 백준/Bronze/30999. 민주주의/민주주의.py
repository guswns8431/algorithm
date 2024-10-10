a, b = map(int, input().split())

answer = 0
for _ in range(a):
    user_input = input()
    if user_input.count('O') >= b / 2:
        answer += 1
print(answer)