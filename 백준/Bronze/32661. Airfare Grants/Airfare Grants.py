n = int(input())

potential_flight = 0
minimum_flight = 1000000

for _ in range(n):
    user_input = int(input())
    potential_flight = max(potential_flight, user_input)
    minimum_flight = min(minimum_flight, user_input)

potential_flight //= 2

if minimum_flight < potential_flight:
    print("0")
else:
    print(minimum_flight - potential_flight)