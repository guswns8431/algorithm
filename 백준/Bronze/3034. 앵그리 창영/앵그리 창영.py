n, w, h = map(int, input().split())
max_length = int((w ** 2 + h ** 2) ** 0.5)
for i in range(n):
    user_input = int(input())
    if user_input <= max_length:
        print("DA")
    else:
        print("NE")