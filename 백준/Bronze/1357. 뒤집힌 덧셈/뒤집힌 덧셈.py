def rev(str_input):
    return str_input[::-1]

x, y = input().split()

input_sum = int(rev(x))+int(rev(y))
print(int(rev(str(input_sum))))