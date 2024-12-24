n, t = map(int, input().split())
user_input = list(map(int, input().split()))

total = 0
answer = 0
for work in user_input:
    answer += 1
    total += int(work)
    if total > t:
        answer -= 1
        break
print(answer)
