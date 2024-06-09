v = int(input())
vote = input()
count_a = 0
count_b = 0

for voted in vote:
    if voted == 'A':
        count_a += 1
    else:
        count_b += 1
if count_a > count_b:
    print('A')
elif count_a == count_b:
    print('Tie')
else:
    print('B')
