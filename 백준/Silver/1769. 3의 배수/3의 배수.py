number = input()
count = 0

while True:
    if int(number) < 10:
        break
    count += 1
    SUM = 0
    for i in range(len(number)):
        SUM += int(number[i])
    number = str(SUM)
print(count)
if int(number) % 3 == 0:
    print("YES")
else:
    print("NO")