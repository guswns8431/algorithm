n, m = map(int,input().split())

operator = [0] * (n + m)
tmp = list(map(int, input().split()))

for i in range(n):
    operator[i] = tmp[i]
for i in range(n):
    tmp = list(map(int, input().split()))
    for j in range(n + m):
        operator[i] -= tmp[j]
        if i != j:
            operator[j] += tmp[j]
for ans in operator:
    print(ans, end=" ")