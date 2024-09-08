user_input1 = input()
user_input2 = input()

answer = 0
for char in user_input1:
    if char not in user_input2:
        answer += 1
    else:
        user_input2 = user_input2.replace(char,'',1)
        user_input1 = user_input1.replace(char,'',1)
for char in user_input2:
    if char not in user_input1:
        answer += 1
    else:
        user_input1 = user_input1.replace(char,'',1)
        user_input2 = user_input2.replace(char,'',1)
print(answer)