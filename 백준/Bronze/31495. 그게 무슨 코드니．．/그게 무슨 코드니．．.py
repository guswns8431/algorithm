user_input = input()

# 입력된 문자열이 정확한지 검증
if len(user_input) >= 2 and user_input[0] == "\"" and user_input[-1] == "\"":
    # 큰따옴표 안의 내용 추출
    content = user_input[1:-1]
    if content:  # 큰따옴표 내부가 빈 문자열이 아닌지 확인
        print(content)
    else:
        print("CE")
else:
    print("CE")
