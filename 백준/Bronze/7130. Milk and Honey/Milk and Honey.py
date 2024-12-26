m, h = map(int, input().split())
n = int(input())

answer = 0
for _ in range(n):
    c, b = map(int, input().split())
    answer += max(m * c, h * b)
print(answer)