n = int(input())
answer1 = 100
answer2 = 100

for i in range(n):
    a, b = map(int, input().split())
    if a > b:
        answer2 -= a
    elif a < b:
        answer1 -= b
print(answer1, answer2, sep="\n")
