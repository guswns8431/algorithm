n, m = map(int, input().split())  # n: 대회장의 수용 인원, m: 학교 수
teams = [int(input()) for _ in range(m)]  # 각 학교의 팀 수 입력

accepted_teams = [0] * m  # 각 학교가 대회에 참가할 수 있는 팀 수
total_accepted = 0  # 현재까지 배정된 총 팀 수

round = 0  # 현재 배정 라운드(한 번의 라운드에서 각 학교에 한 팀씩 배정)
while total_accepted < n:  # 수용 인원이 다 찰 때까지 반복
    added_teams = False  # 이 라운드에서 팀이 추가 배정되었는지 여부

    for i in range(m):
        if teams[i] > round:  # 해당 학교에 배정할 수 있는 팀이 남아 있다면
            accepted_teams[i] += 1  # 한 팀 배정
            total_accepted += 1  # 배정된 팀 수 증가
            added_teams = True  # 팀이 배정되었음을 표시

            if total_accepted == n:  # 수용 인원이 다 차면 종료
                break

    if not added_teams:  # 더 이상 배정할 팀이 없으면 종료
        break

    round += 1  # 다음 라운드로 넘어감

# 각 학교의 배정 결과 출력
for accepted in accepted_teams:
    print(accepted)
