# 이름을 수정하는 함수
def fix_names():
    import sys
    input = sys.stdin.read
    # 입력 데이터 읽기
    names = input().splitlines()
    
    # 문자 교체 테이블 생성 및 변환
    corrected_names = [name.translate(str.maketrans("ieIE", "eiEI")) for name in names]
    
    # 수정된 이름 출력
    for corrected_name in corrected_names:
        print(corrected_name)

# 함수 호출
fix_names()
