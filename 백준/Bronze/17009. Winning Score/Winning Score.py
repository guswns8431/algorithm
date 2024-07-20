answer_a = 0
answer_b = 0
input_list = []

for _ in range(6):
    input_list.append(int(input()))
answer_a = input_list[0] * 3 + input_list[1] * 2 + input_list[2]
answer_b = input_list[3] * 3 + input_list[4] * 2 + input_list[5]

if answer_a > answer_b:
    print("A")
elif answer_a < answer_b:
    print("B")
else:
    print("T")