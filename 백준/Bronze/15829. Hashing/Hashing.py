l = int(input())
input_str = input()
answer = 0

for i in range(len(input_str)):
    answer += ((ord(input_str[i]) - ord('a') + 1) * (31 ** i)) % 1234567891
print(answer)