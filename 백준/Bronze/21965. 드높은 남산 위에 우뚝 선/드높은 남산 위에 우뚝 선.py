n = int(input())

list_input = list(map(int, input().split()))
answer = "YES"

if n == 1:
    print(answer)
    exit(0)
current = list_input[1]
flag = True
for i in range(2, len(list_input)):
    if flag and current >= list_input[i]:
        flag = False
    elif flag is False and current <= list_input[i]:
        answer = "NO"
        break
    current = list_input[i]
print(answer)