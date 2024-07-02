t = int(input())

for i in range(t):
    input_list = list(input().split())
    answer = float(input_list[0])
    for j in range(1, len(input_list)):
        if input_list[j] == '@':
            answer *= 3
        elif input_list[j] == '%':
            answer += 5
        else:
            answer -= 7
    print(f'{answer:.2f}')