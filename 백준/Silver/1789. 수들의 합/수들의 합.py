n = int(input())
answer = 0
current_number = 0

while True:
    current_number += 1
    if n - current_number == 0:
        answer += 1
        break
    elif n - current_number < 0:
        answer -= 1
        n += current_number - 1
        current_number -= 1
    else:
        answer += 1
        n -= current_number
print(answer)