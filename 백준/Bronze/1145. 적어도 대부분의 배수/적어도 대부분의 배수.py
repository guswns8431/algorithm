input_list = list(map(int, input().split()))

input_list.sort()

number = input_list[2]

while True:
    count = 0
    for num in input_list:
        if number % num == 0:
            count += 1
    if count >= 3:
        print(number)
        break
    number += 1