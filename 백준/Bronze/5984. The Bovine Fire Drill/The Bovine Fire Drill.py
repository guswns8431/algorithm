n = int(input())
current_position = 0
cow = list(range(1,n+1))
visited = [False] * n

rised_cow = cow[current_position]
while True:
    cow[current_position] = 0
    current_position = (current_position + rised_cow) % n
    if current_position == 0:
        break
    if visited[current_position]:
        break
    visited[current_position] = True
    tmp = rised_cow
    rised_cow = cow[current_position]
    cow[current_position] = tmp
print(rised_cow)