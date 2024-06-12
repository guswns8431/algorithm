n = int(input())

dic = []
for i in range(n):
    age, name = input().split()
    dic.append((int(age), name))
dic.sort(key=lambda x:int(x[0]))

for i in dic:
    print(i[0], i[1])

