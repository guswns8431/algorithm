test_case = int(input())

score = {"D" : 0, "P" : 0}
for i in range(test_case):
    user_input = input()
    if user_input == "D":
        score["D"] += 1
    else:
        score["P"] += 1
    if abs(score["D"] - score["P"]) >= 2:
        break
print(f'{score["D"]}:{score["P"]}')