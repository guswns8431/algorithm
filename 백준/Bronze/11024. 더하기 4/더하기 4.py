n = int(input())

for _ in range(n):
    user_input = list(map(int, input().split()))
    answer = 0
    for i in user_input:
        answer += int(i)
    print(answer)
