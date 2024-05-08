test_case = int(input())

for i in range(test_case):
    next_flag = False
    input_string = input()
    input_list = []
    for char in input_string:
        if char == '(':
            input_list.append('(')
        else:
            if len(input_list) == 0:
                print("NO")
                next_flag = True
                break
            input_list.pop()
    if next_flag:
        continue
    if len(input_list) != 0:
        print("NO")
    else:
        print("YES")
