test_case = int(input())

for i in range(test_case):
    x, op, y, equal, result = input().split()
    if op == "+":
        if int(x) + int(y) == int(result):
            print(f'Case {i + 1}: YES')
        else:
            print(f'Case {i + 1}: NO')
    else:
        if int(x) - int(y) == int(result):
            print(f'Case {i + 1}: YES')
        else:
            print(f'Case {i + 1}: NO')