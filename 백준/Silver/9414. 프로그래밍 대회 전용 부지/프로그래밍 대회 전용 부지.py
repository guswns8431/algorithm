def input_numbers():
    numbers = []
    while True:
        number = int(input())
        if number == 0: break
        numbers.append(number)

    return sorted(numbers, reverse=True)


def purchase(arr):
    # sum은 arr의 첫 번째 값으로 초기화
    sum = 2 * arr[0]
    # 거듭 제곱을 위한 변수
    cnt = 2
    # sum은 첫 번째 값으로 초기화 해두었으니, 인덱스 1부터 계산 시작
    for j in arr[1:]:
        sum += (2 * (j ** cnt))
        cnt += 1

    return sum


t = int(input())
money = 5 * (10 ** 6)
for _ in range(t):
    arr = input_numbers()
    sum = purchase(arr)
    # 구입에 필요한 금액이 가진 돈 보다 많으면 Too expensive, 아니면 구입에 필요한 금액의 합 출력
    print("Too expensive") if sum > money else print(sum)