test_case = int(input())

for i in range(test_case):
    p = int(input())
    max_value = 0
    max_name = ""
    for j in range(p):
        value, name = input().split()
        if int(value) > max_value:
            max_value = int(value)
            max_name = name
    print(max_name)
