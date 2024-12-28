# 끓이는 횟수 N 입력받기
N = int(input())

# N번 만큼 각 라면 끓이기 정보 입력받고 계산하기
for _ in range(N):
    # A(라면 계수), B(기본 물의 양), X(끓일 라면 수) 입력받기
    A, B, X = map(int, input().split())
    
    # 공식: W = A(X-1) + B 에 따라 계산
    W = A * (X - 1) + B
    
    # 결과 출력
    print(W)