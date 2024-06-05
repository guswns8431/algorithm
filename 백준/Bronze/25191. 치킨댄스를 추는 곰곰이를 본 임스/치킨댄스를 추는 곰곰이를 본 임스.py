chicken = int(input())
coke, beer = map(int, input().split())

coke_chicken = coke / 2
beer_chicken = beer

if coke_chicken + beer_chicken > chicken:
    print(chicken)
else:
    print(int(coke_chicken + beer_chicken))
