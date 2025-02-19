user_input = input()

for char in user_input:
    if char == 'e':
        print(char * 2, end="")
    else:
        print(char, end="")