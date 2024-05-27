while True:
    answer = 0
    input_str = input()
    if input_str == '#':
        break
    for char in input_str:
        if char in ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']:
            answer += 1
    print(answer)
