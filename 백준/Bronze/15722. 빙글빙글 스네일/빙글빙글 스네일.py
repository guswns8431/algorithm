n = int(input())

x_flag = False
y_flag = False
x_max = 1
y_max = 1
x_count = 0
y_count = 0
X = 0
Y = 1
mode = Y

answer_x = 0
answer_y = 0
for i in range(1, n + 1):
    if mode == Y:
        if y_flag:
            answer_y -= 1
        else:
            answer_y += 1
        y_count += 1
        if y_count == y_max:
            mode = X
            y_count = 0
            y_max += 1
            y_flag = not y_flag
    else:
        if x_flag:
            answer_x -= 1
        else:
            answer_x += 1
        x_count += 1
        if x_count == x_max:
            mode = Y
            x_count = 0
            x_max += 1
            x_flag = not x_flag
print(answer_x, answer_y)