direction = {0 : "N", 1 : "E", 2 : "S", 3 : "W"}

current_direction = 0
for _ in range(10):
    user_input = int(input())
    current_direction += user_input
    if current_direction >= 4:
        current_direction -= 4
    elif current_direction < 0:
        current_direction += 4
print(direction[current_direction])