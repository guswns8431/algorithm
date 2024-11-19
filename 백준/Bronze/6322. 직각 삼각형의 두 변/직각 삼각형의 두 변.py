import math

index = 1

def print_impossible():
    print("Impossible.")

while True:
    a, b, c = map(int, input().split())
    if a == 0 and b == 0 and c == 0:
        break

    print(f"Triangle #{index}")
    if a == -1:
        tmp = c ** 2 - b ** 2
        if tmp <= 0 or c <= b:
            print_impossible()
        else:
            answer = math.sqrt(tmp)
            print(f"a = {answer:.3f}")
    elif b == -1:
        tmp = c ** 2 - a ** 2
        if tmp <= 0 or c <= a:
            print_impossible()
        else:
            answer = math.sqrt(tmp)
            print(f"b = {answer:.3f}")
    elif c == -1:
        tmp = a ** 2 + b ** 2
        answer = math.sqrt(tmp)
        if a + b <= answer:  # 삼각형 조건 확인
            print_impossible()
        else:
            print(f"c = {answer:.3f}")

    print()  # 테스트 케이스 간 줄 바꿈
    index += 1
