input_list = []
total_sum = 0

for i in range(9):
    input_person = int(input())
    total_sum += input_person
    input_list.append(input_person)

for i in range(8):
    for j in range(i + 1, 9):
        if total_sum - (input_list[i] + input_list[j]) == 100:
            input_list.remove(input_list[i])
            input_list.remove(input_list[j - 1])
            for k in range(7):
                print(input_list[k])
            exit()


