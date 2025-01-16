x, y = map(int, input().split())

def find_cow(x, y):
    # 현재 위치
    curr_pos = x
    # 이동한 총 거리
    total_distance = 0
    # 다음 이동할 방향과 거리를 결정하는 step (1, 2, 4, 8, ...)
    step = 1
    # 방향 (1: 오른쪽, -1: 왼쪽)
    direction = 1
    
    while True:
        # 다음 위치 계산
        next_pos = x + (direction * step)
        
        # 현재 위치에서 다음 위치까지의 거리 계산
        distance = abs(next_pos - curr_pos)
        
        # Bessie를 찾았는지 확인
        # 현재 위치와 다음 위치 사이에 Bessie가 있는 경우
        if (curr_pos <= y <= next_pos) or (next_pos <= y <= curr_pos):
            # Bessie까지의 실제 거리만 더함
            total_distance += abs(y - curr_pos)
            break
        
        # Bessie를 찾지 못한 경우
        total_distance += distance
        curr_pos = next_pos
        
        # 방향 전환 및 step 크기 증가
        direction *= -1
        step *= 2
    
    return total_distance

print(find_cow(x, y))