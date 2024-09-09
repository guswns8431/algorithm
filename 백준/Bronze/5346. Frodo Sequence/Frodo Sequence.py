while True:
    user_input = int(input())
    if user_input == 0:
        break
    if user_input == 1 or user_input == 2:
        print("1")
        continue
    elif user_input == 3:
        print("2")
        continue
    a, b, c = 1, 1, 2
    for i in range(4, user_input + 1):
        a, b, c = b, c, c + b - a
    print(c)
