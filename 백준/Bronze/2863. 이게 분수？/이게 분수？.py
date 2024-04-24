a, b = map(int, input().split())
c, d = map(int, input().split())

one = a + b
two = c + a
three = d + c
four = d + b

answer = max(one, two, three, four)

if answer == one:
    print(0)
elif answer == two:
    print(1)
elif answer == three:
    print(2)
elif answer == four:
    print(3)