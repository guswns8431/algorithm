n = int(input())

for _ in range(n):
    user_input = input()
    if user_input[-1] == ".":
        print(user_input)
    else:
        print(user_input + '.')