n = int(input())

answer = 0

for i in range(n):
    input_list = map(int, input().split())
    answer += sum(input_list)
print(answer)