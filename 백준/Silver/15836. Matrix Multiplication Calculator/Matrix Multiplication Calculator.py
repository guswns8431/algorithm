case_num = 1

while True:
    # 행렬 크기 입력
    dimensions = input().split()
    if not dimensions:
        continue
        
    M, N, P, Q = map(int, dimensions)
    
    # 종료 조건 확인
    if M == 0 and N == 0 and P == 0 and Q == 0:
        break
    
    # 행렬 A 입력
    A = []
    for i in range(M):
        row = list(map(int, input().split()))
        A.append(row)
    
    # 행렬 B 입력
    B = []
    for i in range(P):
        row = list(map(int, input().split()))
        B.append(row)
    
    # 케이스 번호 출력
    print(f"Case #{case_num}:")
    
    # 행렬 곱셈 가능 여부 확인 (첫 번째 행렬의 열 수 = 두 번째 행렬의 행 수)
    if N != P:
        print("undefined")
    else:
        # 행렬 곱셈 계산 C = A × B
        C = [[0 for _ in range(Q)] for _ in range(M)]
        for i in range(M):
            for j in range(Q):
                for k in range(N):
                    C[i][j] += A[i][k] * B[k][j]
        
        # 결과 출력
        for i in range(M):
            row_str = "| "
            for j in range(Q):
                row_str += str(C[i][j])
                if j < Q - 1:
                    row_str += " "
            row_str += " |"
            print(row_str)
    
    case_num += 1