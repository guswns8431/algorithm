n = int(input())

s_count = 0
t_count = 0
for _ in range(n):
    user_input = input()
    s_count += user_input.count('S') + user_input.count('s')
    t_count += user_input.count('t') + user_input.count('T')
if s_count >= t_count:
    print("French")
else:
    print("English")