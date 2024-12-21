def cal(n):
    n *= 3
    n //= 9
    return n

count = 0
while True:
    count += 1
    user_input = int(input())
    if user_input == 0:
        break
    user_input *= 3
    if user_input % 2 == 0:
        user_input //= 2
        user_input = cal(user_input)
        print(f'{count}. even {user_input}')
    else:
        user_input = (user_input + 1) // 2
        user_input = cal(user_input)
        print(f'{count}. odd {user_input}')


