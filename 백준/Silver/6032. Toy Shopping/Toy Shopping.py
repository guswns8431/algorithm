n = int(input())

map_list = {}
price_list = {}
for i in range(1,n + 1):
    j, p = map(int, input().split())
    price_list[j / p] = p
    map_list[i] = j / p
sorted_map_list = sorted(map_list.items(), key=lambda x: x[1], reverse=True)
answer = price_list[sorted_map_list[0][1]] + price_list[sorted_map_list[1][1]] + price_list[sorted_map_list[2][1]]
print(answer)
print(sorted_map_list[0][0])
print(sorted_map_list[1][0])
print(sorted_map_list[2][0])