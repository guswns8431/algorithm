def calculate_phone_bill(N, calls):
    total_cost = 0

    for call in calls:
        time_part, duration = call.split()
        HH, MM = map(int, time_part.split(":"))
        duration = int(duration)

        # 현재 시간(분 단위)
        for _ in range(duration):
            # 07:00 ~ 18:59이면 10원, 나머지는 5원
            if (7 <= HH < 19):
                total_cost += 10
            else:
                total_cost += 5

            # 분 증가
            MM += 1
            if MM == 60:  # 분이 60이 되면 0으로 초기화하고, 시 증가
                MM = 0
                HH = (HH + 1) % 24  # 24시간 포맷 유지

    return total_cost


# 입력 받기
N = int(input().strip())
calls = [input().strip() for _ in range(N)]

# 결과 출력
print(calculate_phone_bill(N, calls))
