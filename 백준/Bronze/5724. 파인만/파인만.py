while True:
    user_input = int(input())
    if user_input == 0:
        break
    answer = 0
    for i in range(1, user_input + 1):
        answer += i ** 2
    print(answer)