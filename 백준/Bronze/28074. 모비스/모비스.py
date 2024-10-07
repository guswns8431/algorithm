user_input = input()

mobis = "MOBIS"

for char in mobis:
    if char not in user_input:
        print("NO")
        exit(0)
print("YES")