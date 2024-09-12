user_input1 = list(input().split())
user_input2 = list(input().split())

user_input = sorted(list(set(user_input1 + user_input2)))

user_input_len = len(user_input)

for user1 in range(user_input_len):
    for user2 in range(user_input_len):
        print(user_input[user1], user_input[user2])