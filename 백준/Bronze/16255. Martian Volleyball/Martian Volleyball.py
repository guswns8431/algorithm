import sys

t = int(sys.stdin.readline().strip())

for _ in range(t):
    k, x, y = map(int, sys.stdin.readline().split())
    
    max_score = max(x, y)
    min_score = min(x, y)
    
    if max_score >= k and max_score - min_score >= 2:
        print(0)
    else:
        needed_points = max(k - max_score, 2 - (max_score - min_score))
        print(needed_points)
