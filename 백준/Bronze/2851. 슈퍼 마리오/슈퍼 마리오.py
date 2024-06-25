answer = 0
for i in range(10):
    n = int(input())
    if answer + n >= 100:
        if 100 - answer >= answer + n - 100:
            answer = answer + n
        break
    answer += n
print(answer)