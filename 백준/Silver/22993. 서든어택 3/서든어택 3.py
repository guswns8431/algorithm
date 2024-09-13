player = int(input())

user_stat = list(map(int, input().split()))
other_stat = user_stat[1:]
other_stat.sort()

j_stat = user_stat[0]
answer = "Yes"
for stat in other_stat:
    if int(stat) < j_stat:
        j_stat += stat
    else:
        answer = "No"
        break
print(answer)