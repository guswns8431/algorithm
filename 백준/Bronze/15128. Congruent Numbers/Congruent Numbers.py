# 입력 받기
p1, q1, p2, q2 = map(int, input().split())

# 두 변의 길이를 유리수로 계산
side1 = p1 / q1
side2 = p2 / q2

# 직각삼각형의 넓이 계산 (밑변 × 높이 ÷ 2)
# 분수 계산을 위해 분자와 분모를 따로 계산
area_numerator = p1 * p2
area_denominator = q1 * q2 * 2

# 넓이가 정수인지 확인
# area_numerator가 area_denominator로 나누어 떨어지면 정수
if area_numerator % area_denominator == 0:
    print(1)
else:
    print(0)