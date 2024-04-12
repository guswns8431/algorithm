a = list(map(int,input().split()))

a.sort(reverse=True)

print(str(int(a[0]) + int(a[1])))