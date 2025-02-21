def min_candies_to_add(A, B, C):
    # 현재까지 먹은 총 개수
    total = A + B + C
    
    # 현재 최대값
    max_val = max(A, B, C)
    
    # 세 사람이 모두 동일하게 먹을 때의 최소값
    min_equal = max(max_val, (total + 2) // 3)
    
    # 추가로 필요한 개수
    return min_equal * 3 - total

# 입력 받기
A, B, C = map(int, input().split())

# 결과 출력
print(min_candies_to_add(A, B, C))