input_list = []

for i in range(5):
    input_number = int(input())
    if input_number in input_list:
        input_list.remove(input_number)
    else:
        input_list.append(input_number)
print(input_list[0])