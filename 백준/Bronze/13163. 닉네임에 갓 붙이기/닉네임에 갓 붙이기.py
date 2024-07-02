t = int(input())

for i in range(t):
    input_str_list = list(input().split())
    tmp_str = ""
    for j in range(1, len(input_str_list)):
        tmp_str += input_str_list[j]
    print("god", tmp_str, sep="")