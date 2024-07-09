n = int(input())
input_str = input()
holder_counter = 1
L_counter = 0
for ch in input_str:
    if ch == 'S':
        holder_counter += 1
    elif ch == 'L' and L_counter == 1:
        holder_counter += 1
        L_counter += 1
    elif ch == 'L':
        L_counter = 1
if holder_counter > n:
    print(n)
else:
    print(holder_counter)