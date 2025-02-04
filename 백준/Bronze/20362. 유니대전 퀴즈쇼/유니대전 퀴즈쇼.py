def count_unfortunate(N, winner, chats):
    # 당첨자의 위치 찾기
    winner_pos = 0
    for i in range(N):
        if chats[i][0] == winner:
            winner_pos = i
            break
    
    # 당첨자보다 먼저 정답('duck')을 말한 사람 수 세기
    count = 0
    winner_answer = chats[winner_pos][1]
    for i in range(winner_pos):
        if chats[i][1] == winner_answer:
            count += 1
            
    return count

# 입력 처리
N, winner = input().split()
N = int(N)
chats = []
for _ in range(N):
    nickname, content = input().split()
    chats.append((nickname, content))

# 결과 출력
print(count_unfortunate(N, winner, chats))