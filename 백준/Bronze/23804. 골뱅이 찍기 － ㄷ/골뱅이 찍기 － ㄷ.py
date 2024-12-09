top = "@@@@@"
middle = "@"
bottom = "@@@@@"

n = int(input())

def print_top(number):
    for i in range(number):
        print(top * number)

def print_middle(number):
    for i in range(number):
        print(middle * number)
        print(middle * number)
        print(middle * number)

def print_bottom(number):
    for i in range(number):
        print(bottom * number)

print_top(n)
print_middle(n)
print_bottom(n)