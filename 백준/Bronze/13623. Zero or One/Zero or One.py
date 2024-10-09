a, b, c = map(int, input().split())

if a == b and c == b:
    print("*")
elif a == b:
    print("C")
elif c == b:
    print("A")
else:
    print("B")