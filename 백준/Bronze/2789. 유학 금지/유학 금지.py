user_input = input()

CAMBRIDGE = "CAMBRIDGE"
answer = ""
for char in user_input:
    if char not in CAMBRIDGE:
        answer += char
print(answer)