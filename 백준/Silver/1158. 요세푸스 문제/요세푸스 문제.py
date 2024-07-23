n, k = map(int, input().split())
user_list = [i for i in range(1, n + 1)]

current = k - 1
print("<", end="")
while len(user_list) > 1:
    if current >= len(user_list):
        current %= len(user_list)
    print(user_list[current], end=", ")
    user_list.pop(current)
    current += k - 1
print(user_list[0], end=">")