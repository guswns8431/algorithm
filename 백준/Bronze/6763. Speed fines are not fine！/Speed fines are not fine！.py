user_input1 = int(input())
user_input2 = int(input())
fine = user_input2 - user_input1
if user_input1 >= user_input2:
    print("Congratulations, you are within the speed limit!")
    exit(0)
elif fine >= 1 and fine <= 20:
    fine = 100
elif fine >= 21 and fine <= 30:
    fine = 270
else:
    fine = 500
print(f'You are speeding and your fine is ${fine}.')