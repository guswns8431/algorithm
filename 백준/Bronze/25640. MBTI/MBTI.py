my = input()

n = int(input())
answer = 0
for i in range(n):
    other = input()
    if other == my:
        answer += 1
print(answer)
