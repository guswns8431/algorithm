T = int(input())
for _ in range(T):
    answer = 0
    n, d = map(int, input().split())
    for _ in range(n):
        v, f, c = map(int, input().split())
        if d <= v * f / c:
            answer += 1
    print(answer)