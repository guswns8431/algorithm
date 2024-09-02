n = input()
flag = True
for i in range(1, len(n)):
    n1, n2 = n[:i], n[i:]
    m1 = m2 = 1
    for j in n1:
        m1 *= int(j)
    for j in n2:
        m2 *= int(j)
    if m1 == m2:
        flag = False
        break
if flag:
    print("NO")
else:
    print("YES")