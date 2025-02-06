user_input = input().split()
rank = {}

for cards in user_input:
    card = cards[0]
    rank[card] = rank.get(card,0) + 1
print(max(rank.values()))