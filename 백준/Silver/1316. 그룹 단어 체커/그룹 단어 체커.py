n = int(input())

answer = 0
for i in range(n):
    input_str = input()
    input_list = ""
    for j in range(len(input_str)):
        if j == 0:
            input_list += input_str[j]
            answer += 1
            continue
        elif input_str[j] == input_str[j - 1]:
            continue
        elif input_list.find(input_str[j]) != -1:
            answer -= 1
            break
        else:
            input_list += input_str[j]
print(answer)