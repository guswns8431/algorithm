user_input = input()

input_length = len(user_input)
colon_count = user_input.count(':')
underbar_count = user_input.count('_')

print(input_length + colon_count + underbar_count * 5)