user_input = int(input())

answer = user_input * 5 - 400
print(answer)
if answer < 100:
    print("1")
elif answer == 100:
    print("0")
else:
    print("-1")