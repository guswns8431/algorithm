n, u, l = map(int, input().split())

answer = "Bad"

if n >= 1000 and (u >= 8000 or l >= 260):
    answer = "Very Good"
elif n >= 1000:
    answer = "Good"
print(answer)