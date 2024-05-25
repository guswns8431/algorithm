n = int(input())

answer = 0
for i in range(n):
    student, apple = map(int, input().split())
    answer += apple % student
print(answer)