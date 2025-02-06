import operator

rank = {}
user_input = list(input().split())

for i in range(0, len(user_input)):
    rank.setdefault(user_input[i][0], 0)
    rank[user_input[i][0]] += 1
sorted_rank = sorted(rank.items(), key=operator.itemgetter(1), reverse=True)

print(rank.get(sorted_rank[0][0], 0))