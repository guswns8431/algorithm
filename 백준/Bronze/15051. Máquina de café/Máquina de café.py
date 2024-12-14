# 각 층의 직원 수 읽기
a1 = int(input())  # 1층 직원 수
a2 = int(input())  # 2층 직원 수
a3 = int(input())  # 3층 직원 수

# 각 층에 머신을 설치했을 때의 총 시간 계산
# 한 층 이동에 1분, 왕복이므로 *2

# 1층에 설치하는 경우
time1 = (a2 * 1 + a3 * 2) * 2

# 2층에 설치하는 경우
time2 = (a1 * 1 + a3 * 1) * 2

# 3층에 설치하는 경우
time3 = (a1 * 2 + a2 * 1) * 2

# 최소 시간 찾기
min_time = min(time1, time2, time3)

# 결과 출력
print(min_time)