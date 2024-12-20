t = int(input())

def tn(n):
    result = 0
    for i in range(1, n + 2):
        result += i
    return result

for _ in range(t):
    answer = 0
    n = int(input())
    for i in range(1, n + 1):
        answer += i * tn(i)
    print(answer)