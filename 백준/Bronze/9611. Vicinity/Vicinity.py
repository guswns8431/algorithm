import math

# 점의 개수 n을 입력받음
n = int(input())

# n개의 점 좌표를 저장할 리스트
points = []

# n개의 점 좌표 입력받기
for i in range(n):
    x, y = map(int, input().split())
    points.append((x, y))

# 테스트 케이스의 개수 t를 입력받음
t = int(input())

# 각 테스트 케이스 처리
for _ in range(t):
    i, dv = map(int, input().split())
    
    # 점의 인덱스는 1부터 시작하므로 i-1로 해당 점의 좌표를 가져옴
    point_i = points[i-1]
    
    # vicinity 내의 점들의 개수를 저장할 변수
    count = 0
    
    # 모든 점에 대해서
    for j in range(n):
        if i-1 == j:  # 자기 자신은 제외
            continue
        
        point_j = points[j]
        
        # 두 점 사이의 거리 계산 (유클리드 거리)
        distance = math.sqrt((point_i[0] - point_j[0])**2 + (point_i[1] - point_j[1])**2)
        
        # 만약 거리가 vicinity 거리 이하이면 카운트
        if distance <= dv:
            count += 1
    
    # 결과 출력
    print(count)