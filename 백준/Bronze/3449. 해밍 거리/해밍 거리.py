t = int(input())

for _ in range(t):
    a = input()
    b = input()
    answer = 0
    for i in range(len(a)):
        if a[i] != b[i]:
            answer += 1
    print(f'Hamming distance is {answer}.')