def is_triangle(a, b, c):
    # 삼각형이 될 수 있는지 확인
    return (a + b > c) and (b + c > a) and (a + c > b)

def is_right_triangle(a, b, c):
    # 세 변을 정렬하여 가장 긴 변을 c로 만듦
    sides = sorted([a, b, c])
    # 피타고라스 정리 확인
    return sides[0]**2 + sides[1]**2 == sides[2]**2

def is_equilateral(a, b, c):
    # 모든 변의 길이가 같은지 확인
    return a == b == c

# 입력 받기
a, b, c = map(int, input().split())

# 삼각형이 될 수 없는 경우
if not is_triangle(a, b, c):
    print(0)
# 정삼각형인 경우
elif is_equilateral(a, b, c):
    print(2)
# 직각삼각형인 경우
elif is_right_triangle(a, b, c):
    print(1)
# 둘 다 아닌 경우
else:
    print(0)