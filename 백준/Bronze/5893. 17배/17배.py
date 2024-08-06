user_input = input()

n = len(user_input) - 1
oct_number = 0

for char in user_input:
    if char == '1':
        oct_number += 2 ** n
    n -= 1
oct_number *= 17

bin_number = ""
while oct_number > 1:
    bin_number += str(oct_number % 2)
    oct_number //= 2
bin_number += "1"

for ch in range(len(bin_number) - 1, -1, -1):
    print(bin_number[ch], end="")
