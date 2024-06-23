index = 0
while True:
    l, p, v = map(int, input().split())
    if l == 0 and p == 0 and v == 0:
        break
    index += 1
    answer = v // p * l
    if v % p < l:
        answer += v % p
    else:
        answer += l
    print (f'Case {index}: {answer}')