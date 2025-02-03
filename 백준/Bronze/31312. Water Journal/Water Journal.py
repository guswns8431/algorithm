n, a, b = map(int, input().split())
values = []
for _ in range(n-1):
    values.append(int(input()))

answers = []
# a부터 b까지 모든 가능한 값을 체크
for x in range(a, b+1):
    test = values + [x]
    min_val = min(test)
    max_val = max(test)
    # 최소값이 a이고 최대값이 b인 경우만 가능한 답
    if min_val == a and max_val == b:
        answers.append(x)

if answers:
    for ans in answers:
        print(ans)
else:
    print(-1)