testcase = int(input())

for i in range(testcase):
    total_score = 0
    input_list = list(map(int, input().split()))
    list_length = len(input_list)
    for j in range(1, list_length):
        total_score += input_list[j]
    average_score = total_score / (list_length - 1)
    count = 0
    for j in range(1, list_length):
        if input_list[j] > average_score:
            count += 1
    answer = count / (list_length - 1) * 100
    print('{:.3f}%'.format(answer))


