input_str = input()
previous_str = ""
answer = 0

for char in input_str:
    if previous_str != char:
        answer += 10
    else:
        answer += 5
    previous_str = char
print(answer)