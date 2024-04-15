while (True):
    answer = 1
    number = int(input())
    if number == 0:
        break
    number_list = list(map(int, str(number)))
    for i in number_list:
        if i == 1:
            answer += 3
        elif i == 0:
            answer += 5
        else:
            answer += 4
    print(str(answer))

