# 16위부터 20위까지의 득표수 입력받기
votes = list(map(int, input().split()))

# 16위 득표수
rank_16 = votes[0]

# 17위부터 20위까지 순회하면서 16위와의 표 차이가 1000 이하인 캐릭터 수 세기
competition_rate = 0
for i in range(1, 5):  # 17위~20위 확인
    if rank_16 - votes[i] <= 1000:
        competition_rate += 1

# 결과 출력
print(competition_rate)