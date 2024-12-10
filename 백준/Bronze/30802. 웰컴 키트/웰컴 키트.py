n = int(input())
shirts = list(map(int, input().split()))
t, p = map(int, input().split())

answer_t = 0
for i in range(len(shirts)):
    if shirts[i] % t > 0:
        answer_t += shirts[i] // t + 1
    else:
        answer_t += shirts[i] // t
print(answer_t)
print(n // p, n % p)

