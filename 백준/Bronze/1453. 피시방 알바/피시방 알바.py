n = int(input())

pc = [0] * 101
answer = 0
need = list(map(int, input().split()))
for i in range(n):
    if pc[need[i]] == 1:
        answer += 1
    else:
        pc[need[i]] = 1
print(answer)