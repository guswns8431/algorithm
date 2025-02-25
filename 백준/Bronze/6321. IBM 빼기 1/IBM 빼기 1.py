n = int(input())

for index in range(n):
    user_input = input()
    print(f"String #{index + 1}")
    for char in user_input:
        if char == 'Z':
            print('A', end='')
        else:
            print(chr(ord(char)+1), end='')
    print()
    print()