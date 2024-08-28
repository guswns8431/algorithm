t = int(input())

for i in range(t):
    n, m = map(int, input().split())
    answer = 0
    for number in range(n, m + 1):
        answer += str(number).count('0')
    print(answer)
