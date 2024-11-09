t = int(input())
n = int(input())
f_list = list(map(int, input().split()))
if t > sum(f_list):
    print("Padaeng_i Cry")
else:
    print("Padaeng_i Happy")