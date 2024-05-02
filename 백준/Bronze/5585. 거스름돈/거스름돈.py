payment = int(input())
payment = 1000 - payment

answer = 0

answer += payment // 500
payment %= 500

answer += payment // 100
payment %= 100

answer += payment // 50
payment %= 50

answer += payment // 10
payment %= 10

answer += payment // 5
payment %= 5

answer += payment

print(answer)