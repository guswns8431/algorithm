t = int(input())

for i in range(t):
    n, m = map(int, input().split())
    print(f'Scenario #{i + 1}:')
    print((n + m) * (m - n + 1) // 2)
    print()