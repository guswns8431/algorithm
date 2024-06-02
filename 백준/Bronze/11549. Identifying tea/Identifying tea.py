t = int(input())
answer = list(map(int, input().split()))
count = 0

for ans in answer:
    if ans == t:
        count += 1
print(count)
