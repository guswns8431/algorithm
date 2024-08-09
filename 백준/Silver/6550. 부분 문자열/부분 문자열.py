import sys

for line in sys.stdin:
    line = line.strip()
    if not line:
        continue
    s, t = line.split()

    index = 0
    found = True
    for char in s:
        index = t.find(char, index)
        if index == -1:
            print("No")
            found = False
            break
        index += 1
    if found:
        print("Yes")