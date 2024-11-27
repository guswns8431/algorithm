import math

n = int(input())

n_factorial = math.factorial(n)

print(int(n_factorial / 60 / 60 / 24 / 7))
