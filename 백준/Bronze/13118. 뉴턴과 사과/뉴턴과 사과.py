user_pos = list(map(int, input().split()))
x, y, r = map(int, input().split())  # x, y, r을 정수로 변환

position = 0

try:
    idx = user_pos.index(x)  # x의 위치 찾기
    position = idx + 1  # 사람 번호는 1부터 시작하므로 +1
except ValueError:
    position = 0  # x가 user_pos에 없을 경우

print(position)