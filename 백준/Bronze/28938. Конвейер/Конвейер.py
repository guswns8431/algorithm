n = int(input())

user_input_list = list(map(int, input().split()))

if sum(user_input_list) > 0:
    print("Right")
elif sum(user_input_list) < 0:
    print("Left")
else:
    print("Stay")