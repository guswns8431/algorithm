import sys
from collections import Counter

# 모든 입력을 한 번에 읽기 (속도 최적화)
text = sys.stdin.read()

# 알파벳 개수 카운트 (공백 제외)
counter = Counter(char for char in text if char.isalpha())

# 최대 빈도수 찾기
max_count = max(counter.values())

# 최대 빈도수에 해당하는 알파벳만 출력 (알파벳 순 정렬)
print("".join(sorted(ch for ch, cnt in counter.items() if cnt == max_count)))
