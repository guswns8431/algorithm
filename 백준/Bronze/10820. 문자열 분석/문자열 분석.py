import sys

while True:
    input_str = sys.stdin.readline().rstrip('\n')
    if not input_str:
        break
    lower = 0
    upper = 0
    digit = 0
    space = 0

    for char in input_str:
        if char.islower():
            lower += 1
        elif char.isupper():
            upper += 1
        elif char.isdigit():
            digit += 1
        else:
            space += 1
    print(lower, upper, digit, space)