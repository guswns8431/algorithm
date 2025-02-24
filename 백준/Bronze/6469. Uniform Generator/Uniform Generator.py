def check_sequence(step, mod):
    # 첫 번째 시드를 0으로 시작
    seen = set()
    current = 0
    
    # MOD번 반복하거나 같은 수가 나올 때까지 계속
    while current not in seen:
        seen.add(current)
        current = (current + step) % mod
    
    # 0부터 MOD-1까지의 모든 수가 나왔는지 확인
    return len(seen) == mod

# 입력 처리
while True:
    try:
        step, mod = map(int, input().split())
        
        # 결과 판단
        result = "Good Choice" if check_sequence(step, mod) else "Bad Choice"
        
        # 형식에 맞춰 출력
        print(f"{step:>10}{mod:>10} {result}")
        print()  # 빈 줄 출력
        
    except EOFError:
        break