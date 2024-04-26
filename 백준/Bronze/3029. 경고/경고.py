input1 = input().split(':')
input2 = input().split(':')

current_time = int(input1[0]) * 3600 + int(input1[1]) * 60 + int(input1[2])
sodium_time = int(input2[0]) * 3600 + int(input2[1]) * 60 + int(input2[2])

answer_time = sodium_time - current_time

if answer_time <= 0:
    answer_time += 24 * 3600
answer_time_hour = answer_time // 3600
answer_time %= 3600
answer_time_minute = answer_time // 60
answer_time_second = answer_time % 60

print(f'{answer_time_hour:02d}:{answer_time_minute:02d}:{answer_time_second:02d}')