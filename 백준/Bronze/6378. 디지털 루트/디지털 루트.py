def digital_root(number):
    result = 0
    str_number = str(number)
    for i in range(len(str_number)):
        result += int(str_number[i])
    if result <= 9:
        return result
    else:
        return digital_root(result)

answer = 0

while True:
    user_input = int(input())
    if user_input == 0:
        break
    answer = digital_root(user_input)
    print(answer)