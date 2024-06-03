t = int(input())

for i in range(t):
    yonsei = 0
    korea = 0
    for j in range(9):
        y, k = map(int, input().split())
        yonsei += y
        korea += k
    if korea > yonsei:
        print("Korea")
    elif korea < yonsei:
        print("Yonsei")
    else:
        print("Draw")