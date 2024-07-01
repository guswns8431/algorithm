n = int(input())
chicken_list = [n] * 3
answer = 0
need_list = list(map(int,input().split()))
if chicken_list[0] < need_list[0]:
    answer = chicken_list[0]
else:
    answer = need_list[0]
if chicken_list[1] < need_list[1]:
    answer += chicken_list[1]
else:
    answer += need_list[1]
if chicken_list[2] < need_list[2]:
    answer += chicken_list[2]
else:
    answer += need_list[2]
print(answer)