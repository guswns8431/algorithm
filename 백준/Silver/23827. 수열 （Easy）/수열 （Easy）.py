n = int(input())
input_list = list(map(int, input().split()))
MOD = 1000000007

total_sum = sum(input_list)
answer = 0

for i in range(n):
    total_sum -= input_list[i]
    answer += input_list[i] * total_sum
    answer %= MOD

print(answer)