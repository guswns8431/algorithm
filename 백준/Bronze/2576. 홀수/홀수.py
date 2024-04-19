answerSum = 0
answerMin = 100
for i in range(7):
    x = int(input())
    if x % 2 == 1:
        answerSum += x
        answerMin = min(answerMin, x)
if answerSum == 0:
    print(-1)
else:
    print(answerSum)
    print(answerMin)