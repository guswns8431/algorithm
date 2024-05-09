test_case = int(input())

for i in range(test_case):
    n = int(input())
    for row in range(n):
        for col in range(n):
            if col == n - 1:
                print("#")
            elif row == 0 or row == n - 1:
                print("#", end="")
            elif row != 0 and col == 0:
                print("#", end="")
            else:
                print("J", end="")
    print()




