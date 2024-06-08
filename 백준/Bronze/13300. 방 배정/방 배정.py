n, k = map(int, input().split())
arr = [[0 for col in range(2)] for row in range(6)]
answer = 0


for i in range(n):
    s, y = map(int, input().split())
    arr[y - 1][s] += 1
for i in range(6):
    for j in range(2):
        if arr[i][j] % k == 0:
            answer += arr[i][j] / k
        else:
            answer += arr[i][j] // k + 1
print(int(answer))
