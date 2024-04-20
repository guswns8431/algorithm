n = int(input())
answer = 0

for i in range(n):
    a, b, c= map(int, input().split())
    if a == b and a == c:
        answer = max(answer, 10000 + (a * 1000))
    elif a == b and a != c:
        answer = max(answer, 1000 + (a * 100))
    elif a == c and a != b:
        answer = max(answer, 1000 + (a * 100))
    elif b == c and b != a:
        answer = max(answer, 1000 + (b * 100))
    else:
        answer = max(answer, max(a, b, c) * 100)
print(answer)