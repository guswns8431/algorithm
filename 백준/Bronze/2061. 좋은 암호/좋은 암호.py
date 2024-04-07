import sys

k, l = map(int, sys.stdin.readline().split())

for i in range(2, l):
    if k % i == 0:
        print("BAD " + str(i))
        exit()
print("GOOD")

