while True:
    user_input = int(input())
    if user_input == 0:
        break
    for i in range(user_input):
        print((i + 1) * "*")