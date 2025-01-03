h1, b1 = map(int, input().split())
h2, b2 = map(int, input().split())

p1_score = h1 * 3 + b1
p2_score = h2 * 3 + b2
if p1_score > p2_score:
    print("1", p1_score - p2_score)
elif p2_score > p1_score:
    print("2", p2_score - p1_score)
else:
    print("NO SCORE")