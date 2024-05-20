n = int(input())

for i in range(n):
    input_str = input().split()
    for str in input_str:
        print(str[::-1], end=' ')
    print()