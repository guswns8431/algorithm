def find_longest_cre_string(S):
    n = len(S)
    max_length = 0

    # 짝수 길이의 모든 부분 문자열 탐색
    for length in range(2, n + 1, 2):  # 짝수 길이만 고려
        for start in range(n - length + 1):  # 시작 인덱스 조정
            mid = start + length // 2
            left_sum = sum(map(int, S[start:mid]))   # 앞 절반의 합
            right_sum = sum(map(int, S[mid:start + length]))  # 뒤 절반의 합

            if left_sum == right_sum:
                max_length = max(max_length, length)

    return max_length

# 입력 받기
S = input().strip()
print(find_longest_cre_string(S))
