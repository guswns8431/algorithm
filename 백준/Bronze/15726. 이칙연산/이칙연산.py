a, b, c = map(int, input().split())

answer = max(a * b / c, a / b * c)

print(int(answer))