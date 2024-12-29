number = ""
op = ""
while True:
    user_input = input()
    if number == "":
        number = user_input
        answer = int(number)
    elif user_input == "+" or user_input == "-" or user_input == "*" or user_input == "/":
        op = user_input
    elif user_input == "=":
        print(answer)
        break
    else:
        if op == "+":
            answer += int(user_input)
        elif op == "-":
            answer -= int(user_input)
        elif op == "*":
            answer *= int(user_input)
        else:
            answer //= int(user_input)



