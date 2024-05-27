input_str = input()
answer = 0

for char in input_str:
    if char in ['a', 'e', 'i', 'o', 'u']:
        answer += 1
print(answer)