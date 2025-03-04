t, d, m = map(int, input().split())

current = 0

if t > d:
    print("N")
    exit(0)
elif m == 0:
    print("Y")
    exit(0)
else:
    for _ in range(m):
        user_input = int(input())
        if user_input - current >= t:
            print("Y")
            exit(0)
        current = user_input
if d - current >= t:
    print("Y")
else:
    print("N")