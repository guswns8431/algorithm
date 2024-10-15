n = int(input())

v_count = n // 5
I_count = n % 5

answer = v_count * "V" +  I_count * "I"
print(answer)