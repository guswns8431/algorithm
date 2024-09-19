time_to_sleep = int(input())
alarm_to_ring = int(input())

if alarm_to_ring >= time_to_sleep:
    # 아침에 일어나므로 시간을 그냥 뺀다.
    sleep_time = alarm_to_ring - time_to_sleep
else:
    # 자정이 넘어서 일어나는 경우 24시간을 더한 후 계산
    sleep_time = (alarm_to_ring + 24) - time_to_sleep

print(sleep_time)
