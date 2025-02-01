import sys
import decimal

# 소수점 정밀도 1100자리 설정 (여유 있게)
decimal.getcontext().prec = 1100

A, B = map(int, sys.stdin.readline().split())

# 정밀한 나눗셈 수행
result = decimal.Decimal(A) / decimal.Decimal(B)

# 소수점 1000자리까지 출력
print(f"{result:.1000f}")
