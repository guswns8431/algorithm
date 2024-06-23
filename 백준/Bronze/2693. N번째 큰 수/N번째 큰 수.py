test_case = int(input())

for i in range(test_case):
    arr_list = list(map(int, input().split()))
    arr_list.sort()
    print(arr_list[7])
