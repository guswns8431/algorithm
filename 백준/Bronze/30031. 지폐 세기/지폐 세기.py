bill = {"136":1000, "142":5000, "148":10000, "154":50000}
answer = 0

n = int(input())

for _ in range(n):
    col, row = input().split()
    if col in bill:
        answer += bill[col]
print(answer)