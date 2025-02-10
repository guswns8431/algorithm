def find_factors(n):
    # 숫자 n의 모든 약수(음수 포함) 찾기
    if n == 0:
        return []
    factors = set()
    for i in range(1, int(abs(n)**0.5) + 1):
        if n % i == 0:
            factors.add(i)
            factors.add(n//i)
            factors.add(-i)
            factors.add(-(n//i))
    return list(factors)

def solve(n):
    # nx² + (n+1)x - (n+2) = (ax + b)(cx + d)
    # 전개하면: acx² + (ad+bc)x + bd
    # 따라서:
    # 1) ac = n
    # 2) ad + bc = n+1
    # 3) bd = -(n+2)
    
    # ac = n이 되는 모든 (a,c) 쌍 찾기
    factors_of_n = find_factors(n)
    ac_pairs = [(a, n//a) for a in factors_of_n if n % a == 0]
    
    # bd = -(n+2)가 되는 모든 (b,d) 쌍 찾기
    factors_of_neg_n_plus_2 = find_factors(-(n+2))
    bd_pairs = [(b, -(n+2)//b) for b in factors_of_neg_n_plus_2 if -(n+2) % b == 0]
    
    # 모든 조합을 시도하며 ad + bc = n+1을 만족하는지 확인
    for a, c in ac_pairs:
        for b, d in bd_pairs:
            if a*d + b*c == n+1:
                return [a, b, c, d]
    return [-1]

n = int(input())
result = solve(n)
print(*result)