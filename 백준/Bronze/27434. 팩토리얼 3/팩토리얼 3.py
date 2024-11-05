user_input = int(input())

if user_input == 0:
    print("1")
else:
    answer = 1
    for x in range(1, user_input + 1):
        answer *= x
    print(answer)