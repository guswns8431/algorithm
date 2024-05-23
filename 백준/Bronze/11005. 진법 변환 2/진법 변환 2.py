n, b = map(int, input().split())
answer = ""

while True:
    remain = n % b
    if n < b:
        if n < 10:
            answer = str(n) + answer
        else:
            answer = chr(remain + 55) + answer
        break
    if remain < 10:
        answer = str(remain) + answer
    else:
        answer = chr(remain + 55) + answer
    n = n // b
print(answer)