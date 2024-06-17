n = input()
number_set = {str(i): 0 for i in range(10)}
answer = 0

for number in n:
    if (number == '6' or number == '9') and (number_set['6'] == 0 and number_set['9'] == 0):
        answer += 1
        for i in range(10):
            number_set[str(i)] += 1
    elif number_set[number] == 0 and (number != '6' and number != '9'):
        answer += 1
        for i in range(10):
            number_set[str(i)] += 1
    if number == '6' or number == '9':
        if number_set["6"] >= 1:
            number_set["6"] -= 1
        else:
            number_set["9"] -= 1
        continue
    if number_set[number] >= 1:
        number_set[number] -= 1
        continue
print(answer)