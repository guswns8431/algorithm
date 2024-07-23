while True:
    user_input = input()
    if user_input == "0":
        break
    current_number = user_input[0]
    count = 0
    for char in user_input:
        if current_number == char:
            count += 1
        else:
            print(f"{count}{current_number}", end="")
            count = 1
            current_number = char
    print(f"{count}{current_number}")