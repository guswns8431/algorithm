n = int(input())
input_arr = list(map(int, input().split()))
current = 0
max_value = 0
min_value = 1000
answer = 0

for i in range(n):
    if input_arr[i] > current:
        if max_value < input_arr[i]:
            max_value = input_arr[i]
        if min_value > input_arr[i]:
            min_value = input_arr[i]
    else:
        answer = max(max_value - min_value, answer)
        max_value = input_arr[i]
        min_value = input_arr[i]
    current = input_arr[i]
    if i == n - 1:
        answer = max(max_value - min_value, answer)
print(answer)
