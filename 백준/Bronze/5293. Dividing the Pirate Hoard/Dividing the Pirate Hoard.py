def pirate_coins_distribution(M, N):
    # M: 초기 동전의 수
    # N: 해적의 수
    
    # 각 해적이 가지는 동전의 수를 저장할 리스트
    pirate_coins = [0] * N
    
    # 현재 남아있는 동전의 수
    remaining_coins = M
    
    for i in range(N):
        # 동전을 N개의 더미로 나누고 남은 나머지를 계산
        share = remaining_coins // N
        leftover = remaining_coins % N
        
        # 해적은 자기 몫인 share와 나머지 leftover를 가져간다
        pirate_coins[i] = share + leftover
        
        # 남아있는 동전의 수는 share를 N-1번 더한 것
        remaining_coins = share * (N - 1)
    
    # 각 해적이 가지는 동전의 수를 큰 순서대로 출력
    pirate_coins.sort(reverse=True)
    print(" ".join(map(str, pirate_coins)))
    
    # 남아있는 동전의 수를 출력
    print(remaining_coins)

# 입력값을 받아서 함수 호출
M, N = map(int, input().split())

pirate_coins_distribution(M, N)
