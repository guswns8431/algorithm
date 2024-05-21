while True:
    answer = ''
    n = int(input())
    if n == -1:
        break
    answer += str(n) + ' = '
    i_sum = 0
    for i in range(1, n):
        if n % i == 0:
            answer += str(i)
            if i != n - 1:
                answer += ' + '
            i_sum += i
    if i_sum == n:
        print(answer[0:len(answer) - 3])
    else:
        print(str(n) + ' is NOT perfect.')