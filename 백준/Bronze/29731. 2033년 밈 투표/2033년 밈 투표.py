rick = {
    "Never gonna give you up",
    "Never gonna let you down",
    "Never gonna run around and desert you",
    "Never gonna make you cry",
    "Never gonna say goodbye",
    "Never gonna tell a lie and hurt you",
    "Never gonna stop"
}
answer = "No"
n = int(input())

for i in range(n):
    user_input = input()
    if user_input not in rick:
        answer = "Yes"
print(answer)