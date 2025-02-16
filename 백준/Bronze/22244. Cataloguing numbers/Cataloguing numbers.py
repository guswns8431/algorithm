def is_leap_year(year):
    if year % 400 == 0:
        return True
    if year % 100 == 0:
        return False
    return year % 4 == 0

def is_valid_date(day, month, year):
    if month < 1 or month > 12 or day < 1:
        return False
    
    days_in_month = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if is_leap_year(year):
        days_in_month[2] = 29
        
    return day <= days_in_month[month]

def get_actual_year(year_code):
    if 0 <= year_code <= 599:
        return 2000 + year_code
    return 1600 + (year_code - 600)

def check_catalogue_number(num_str):
    # 입력이 9자리인지 확인
    if len(num_str) != 9:
        return 0
    
    # 날짜 부분 추출
    try:
        day = int(num_str[0:2])
        month = int(num_str[2:4])
        year_code = int(num_str[4:7])
    except ValueError:
        return 0
    
    # 실제 연도 계산
    year = get_actual_year(year_code)
    
    # 날짜 유효성 검사
    if not is_valid_date(day, month, year):
        return 0
    
    # 저자 타입 검사 (1, 6, 9만 유효)
    author_type = int(num_str[7])
    if author_type not in [1, 6, 9]:
        return 0
    
    # 체크섬 계산
    sum_squares = sum(int(digit)**2 for digit in num_str[:8])
    expected_checksum = sum_squares % 7
    actual_checksum = int(num_str[8])
    
    if expected_checksum != actual_checksum:
        return 0
        
    return 1

# 입력 처리
numbers = []
for _ in range(3):
    num = input().strip()
    numbers.append(num)

# 결과 출력
for num in numbers:
    print(check_catalogue_number(num))