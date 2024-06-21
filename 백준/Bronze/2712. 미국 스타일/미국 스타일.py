t = int(input())

for i in range(t):
    n, m = input().split()
    n = float(n)
    if m == "kg":
        answer = n * 2.2046
        print(f"{answer:.4f} lb")
    elif m == "lb":
        answer = n * 0.4536
        print(f"{answer:.4f} kg")
    elif m == "l":
        answer = n * 0.2642
        print(f"{answer:.4f} g")
    else:
        answer = n * 3.7854
        print(f"{answer:.4f} l")