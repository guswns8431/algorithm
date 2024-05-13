l = int(input())
input_str = input()
answer = 0

for i in range(l):
    answer += (ord(input_str[i]) - ord('a') + 1) * (31 ** i) 
print(answer % 1234567891)

