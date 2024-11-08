n = int(input())

answer = 0
for i in range(1, n + 1):
    str_i = str(i)
    answer += str_i.count('3')
    answer += str_i.count('6')
    answer += str_i.count('9')
print(answer)