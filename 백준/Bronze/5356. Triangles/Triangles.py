n = int(input())

for _ in range(n):
    count, letter = input().split()
    for i in range(int(count)):
        result = ord(letter) + i
        if result > ord('Z'):
            result -= 26
        print(chr(result) * (i + 1), end='')
        print()
    print()