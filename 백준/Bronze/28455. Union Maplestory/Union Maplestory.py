n = int(input())
input_list = [0] * n
answer_1 = 0
answer_2 = 0

for i in range(n):
    tmp = int(input())
    input_list[i] = tmp
input_list.sort(reverse=True)

if n > 42:
    n = 42
for i in range(n):
    answer_1 += input_list[i]
    if input_list[i] >= 250:
        answer_2 += 5
    elif input_list[i] >= 200:
        answer_2 += 4
    elif input_list[i] >= 140:
        answer_2 += 3
    elif input_list[i] >= 100:
        answer_2 += 2
    elif input_list[i] >= 60:
        answer_2 += 1
print(answer_1, answer_2)