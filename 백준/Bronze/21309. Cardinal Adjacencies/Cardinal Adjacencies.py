def count_adjacencies(grid):
    rows = len(grid)
    cols = len(grid[0])
    cardinal = 0
    intercardinal = 0
    
    # 방향 정의 (상,하,좌,우) - cardinal 방향
    cardinal_dirs = [(-1,0), (1,0), (0,-1), (0,1)]
    
    # 방향 정의 (대각선 포함) - intercardinal 방향
    intercardinal_dirs = [(-1,0), (1,0), (0,-1), (0,1),
                         (-1,-1), (-1,1), (1,-1), (1,1)]
    
    # 격자의 각 셀을 확인
    for i in range(rows):
        for j in range(cols):
            # 현재 셀이 땅인 경우에만 확인
            if grid[i][j] == 1:
                # Cardinal 인접 확인
                for di, dj in cardinal_dirs:
                    ni, nj = i + di, j + dj
                    if 0 <= ni < rows and 0 <= nj < cols and grid[ni][nj] == 1:
                        cardinal += 1
                        
                # Intercardinal 인접 확인
                for di, dj in intercardinal_dirs:
                    ni, nj = i + di, j + dj
                    if 0 <= ni < rows and 0 <= nj < cols and grid[ni][nj] == 1:
                        intercardinal += 1
    
    # cardinal은 각 edge가 두 번 카운트되므로 2로 나눔
    return cardinal // 2, intercardinal // 2

# 입력 처리
n_rows, n_cols = map(int, input().split())
grid = []
for _ in range(n_rows):
    row = list(map(int, input().split()))
    grid.append(row)

# 결과 계산 및 출력
cardinal_adj, intercardinal_adj = count_adjacencies(grid)
print(cardinal_adj, intercardinal_adj)