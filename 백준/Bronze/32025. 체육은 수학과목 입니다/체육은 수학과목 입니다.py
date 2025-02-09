def find_largest_circle_radius():
    # 입력 받기 (단위: m)
    H = int(input())  # 첫 번째 변의 길이
    W = int(input())  # 두 번째 변의 길이
    
    # 더 짧은 변의 길이 찾기
    shorter_side = min(H, W)
    
    # 반지름 계산 (m → cm 변환)
    radius_cm = (shorter_side * 100) // 2
    
    return radius_cm

# 결과 출력
print(find_largest_circle_radius())