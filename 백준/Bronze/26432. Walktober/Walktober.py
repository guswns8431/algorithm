t = int(input())

for test_case in range(t):
    m, n, p = map(int, input().split())
    input_list = [list(map(int, input().split())) for _ in range(m)]
    answer = 0
    for i in range(n):
        tmp = 0
        for j in range(m):
            tmp = max(tmp, input_list[j][i])
        answer += tmp - input_list[p - 1][i]
    print(f'Case #{test_case + 1}: {answer}')