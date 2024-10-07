n = int(input())

study_list = list(map(int, input().split()))

total = (sum(study_list) + 8 * (n - 1))
print(total // 24, total % 24)
