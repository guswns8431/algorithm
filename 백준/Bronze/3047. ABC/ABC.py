tmp = list(map(int, input().split()))
tmp.sort()

a = tmp[0]
b = tmp[1]
c = tmp[2]

order = input()

for ch in order:
    if ch == 'A':
        print(a, end=" ")
    elif ch == 'B':
        print(b, end= " ")
    else:
        print(c, end=" ")