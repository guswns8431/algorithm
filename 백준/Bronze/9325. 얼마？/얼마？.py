test_case = int(input())

for t in range(test_case):
    price = int(input())
    option = int(input())
    for o in range(option):
        p, q = map(int, input().split())
        price += p * q
    print(price)