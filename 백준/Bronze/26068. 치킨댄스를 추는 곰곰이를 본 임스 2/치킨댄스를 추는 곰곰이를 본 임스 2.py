n = int(input())
answer = 0
for _ in range(n):
    input_str = input()
    number = ''.join([num for num in input_str if num.isdigit()])
    if int(number) <= 90:
        answer += 1
print(answer)