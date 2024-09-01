n = int(input())
answer = 0
start, end = 0, 0
total = 0

while end <= n:
    if total > n:
        start += 1
        total -= start
    elif total < n:
        end += 1
        total += end
    else:
        answer += 1
        end += 1
        total += end
print(answer)