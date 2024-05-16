import math

m = int(input())
n = int(input())

m_sqrt = int(math.sqrt(m))
n_sqrt = int(math.sqrt(n))
answer_sum = 0
answer_min = -1

for i in range(m_sqrt, n_sqrt + 1):
    current_i = i ** 2
    if m <= current_i and n >= current_i:
        if answer_min == -1:
            answer_min = current_i
        answer_sum += current_i
if answer_min == -1:
    print(answer_min)
else:
    print(answer_sum)
    print(answer_min)
