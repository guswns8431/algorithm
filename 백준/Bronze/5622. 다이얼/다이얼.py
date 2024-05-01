s = input()
answer = 0

for i in range(len(s)):
    if s[i] >= 'A' and s[i] <= 'C':
        answer += 3
    elif s[i] >= 'D' and s[i] <= 'F':
        answer += 4
    elif s[i] >= 'G' and s[i] <= 'I':
        answer += 5
    elif s[i] >= 'J' and s[i] <= 'L':
        answer += 6
    elif s[i] >= 'M' and s[i] <= 'O':
        answer += 7
    elif s[i] >= 'P' and s[i] <= 'S':
        answer += 8
    elif s[i] >= 'T' and s[i] <= 'V':
        answer += 9
    elif s[i] >= 'W' and s[i] <= 'Z':
        answer += 10
print(answer)
