n = int(input())

for i in range(n):
    input_str = input()
    if "Simon says" in input_str:
        print(input_str[input_str.find("Simon says") + 10:])