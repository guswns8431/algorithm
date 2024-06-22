import sys
input = sys.stdin.read

# Read all input at once
data = input().split()
n = int(data[0])
heights = list(map(int, data[1:]))

answer = 0
current_max = 0

# Iterate from the last element to the first
for height in reversed(heights):
    if height > current_max:
        answer += 1
        current_max = height

print(answer)