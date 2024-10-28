n, x = map(int, input().split())
input_list = list(map(int, input().split()))

min_cost = float('inf')

for i in range(n - 1):
    current_cost = (input_list[i] + input_list[i + 1]) * x
    if current_cost < min_cost:
        min_cost = current_cost

print(min_cost)