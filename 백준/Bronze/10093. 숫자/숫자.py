a, b = map(int, input().split())

answer = abs(b - a) - 1
if a == b:
    answer = 0
print(answer)


if a > b:
    a, b = b, a

for number in range(a + 1, b):
    print(number, end=" ")