while True:
    n = int(input())
    if n == 0:
        break
    count = 1
    current_cost = 1
    answer = 0
    for _ in range(n):
        answer += current_cost
        if current_cost == count:
            count = 0
            current_cost += 1
            count = 1
            continue
        count += 1
    print(n, answer)