n,m = map(int, input().split())
 
arr = []
 
for _ in range(n):  # 카드 m개를 n명의 플레이어 수 만큼 입력 받기
    cardNum = sorted(list(map(int, input().split())), reverse=True)   # 내림차순 정렬
    arr.append(cardNum) # 정렬한 cardNum을 arr에 추가
 
card = n * [0]  # 플레이어 수 만큼 크기의 배열 생성(현재 값들은 0)
 
for i in range(m):
    maxNum = arr[0][i]   # arr[0][i] 번째 요소를 m에 저장
    
    for j in range(n):
        maxNum = max(maxNum, arr[j][i])   # m과 arr[j][i]번째 값을 계속 비교해서 최댓값을 m에 저장
    
    for j in range(n):
        if arr[j][i] == maxNum:  # 만약 arr[j][i]번째 값이 m과 같다면
            card[j] += 1    # 미리 선언해 둔 card의 j번째에 1을 누적해서 더하기
 
result = [] # 가장 많은 점수를 획득한 플레이어들이 여러명일 때 모두 출력하기 위한 과정
 
for i in range(len(card)):  # 각 플레이어들이 획득한 점수들이 모여있는 리스트 card
    if max(card) == card[i]:   # card의 최댓값이 card[i]번째 원소와 같으면 그 인덱스를 result에 저장 
        result.append(i+1) # 인덱스는 0부터 시작이므로 +1해서 저장
    
print(*result)  # result 리스트의 원소들을 출력