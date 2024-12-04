n = int(input())

for i in range(n):
    user_input = list(map(int, input().split()))
    user_input.sort()
    print(f'Scenario #{i + 1}:')
    if user_input[0] ** 2 + user_input[1] ** 2 == user_input[2] ** 2:
        print("yes")
    else:
        print("no")
    print()
