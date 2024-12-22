n, l = input().split()

count = 0
answer = 0
while True:
    count += 1
    if count > int(n):
        break
    answer += 1
    if l in str(answer):
        count -= 1
        continue
print(answer)