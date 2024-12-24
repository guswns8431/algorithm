# 테스트 케이스 개수 입력
n = int(input())

# 모음 set 생성 (검색 효율을 위해 set 사용)
vowels = set('aeiou')

# 각 테스트 케이스 처리
for _ in range(n):
    # 단어 입력
    word = input()
    
    # 모음 개수 세기
    count = sum(1 for char in word if char in vowels)
    
    # 결과 출력
    print(f"The number of vowels in {word} is {count}.")