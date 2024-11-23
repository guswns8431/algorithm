t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    u = 1
    t = 0
    for tmp_t in range(0, m + 1):
        if n - tmp_t * 2 == m - tmp_t:
            t = tmp_t
            u = m - t
            break
    print(u, t)
