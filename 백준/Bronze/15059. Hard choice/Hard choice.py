a, b, c = map(int, input().split())
ar, br, cr = map(int, input().split())

answer = 0

if ar > a:
    answer += ar - a
if br > b:
    answer += br - b
if cr > c:
    answer += cr - c
print(answer)