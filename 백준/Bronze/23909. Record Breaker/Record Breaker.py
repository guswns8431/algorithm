def count_record_breaking_days(n, visitors):
    """
    기록 깨는 날의 개수를 계산합니다.
    
    Args:
        n: 연속된 날짜의 수
        visitors: 각 날짜별 방문자 수 리스트
    
    Returns:
        기록 깨는 날의 개수
    """
    if n == 1:  # 날짜가 하루뿐이면 항상 기록 깨는 날
        return 1
    
    count = 0
    max_so_far = -1  # 지금까지 본 최대 방문자 수
    
    for i in range(n):
        # 현재 날이 기록 깨는 날인지 확인
        is_record_breaking = True
        
        # 조건 1: 이전의 모든 날보다 방문자 수가 많아야 함
        if visitors[i] <= max_so_far:
            is_record_breaking = False
        
        # 조건 2: 마지막 날이거나 다음 날보다 방문자 수가 많아야 함
        if i < n - 1 and visitors[i] <= visitors[i + 1]:
            is_record_breaking = False
        
        # 기록 깨는 날이면 카운트 증가
        if is_record_breaking:
            count += 1
        
        # 최대 방문자 수 업데이트
        max_so_far = max(max_so_far, visitors[i])
    
    return count

def main():
    t = int(input())  # 테스트 케이스 수
    
    for case in range(1, t + 1):
        n = int(input())  # 연속된 날짜 수
        visitors = list(map(int, input().split()))  # 방문자 수 리스트
        
        result = count_record_breaking_days(n, visitors)
        print(f"Case #{case}: {result}")

if __name__ == "__main__":
    main()