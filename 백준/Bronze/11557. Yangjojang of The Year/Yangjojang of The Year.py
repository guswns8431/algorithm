test_case = int(input())

for i in range(test_case):
    school = {}
    n = int(input())
    for j in range(n):
        a, b = input().split()
        school[int(b)] = a
    sorted_dict = sorted(school.items(), reverse=True)
    first_key = next(iter(sorted_dict))
    print(first_key[1])