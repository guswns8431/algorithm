input_str = input()
answer = ""

for char in input_str:
    if char.isupper():
        answer += char
print(answer)