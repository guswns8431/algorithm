t = int(input())

for i in range(t):
    answer = 0
    a, b = map(int, input().split())
    if a == 0:
       answer += 0
    elif a <= 1:
        answer += 5000000
    elif a <= 3:
        answer += 3000000
    elif a <= 6:
        answer += 2000000
    elif a <= 10:
        answer += 500000
    elif a <= 15:
        answer += 300000
    elif a <= 21:
        answer += 100000
    if b == 0:
        answer += 0
    elif b <= 1:
        answer += 5120000
    elif b <= 3:
        answer += 2560000
    elif b <= 7:
        answer += 1280000
    elif b <= 15:
        answer += 640000
    elif b <= 31:
        answer += 320000
    print(answer)