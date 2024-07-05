from collections import deque

computer_num = int(input())
n = int(input())

graph = [[] for i in range(computer_num + 1)]
visited = [0] * (computer_num + 1)
for i in range(n):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
visited[1] = 1
queue = deque()
queue.append(1)
while queue:
    node = queue.popleft()
    for nx in graph[node]:
        if visited[nx] == 1:
            continue
        queue.append(nx)
        visited[nx] = 1
print(sum(visited) - 1)
