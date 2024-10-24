import math
import sys

def calculate_price(p, a, b, c, d, k):
    return p * (math.sin(a * k + b) + math.cos(c * k + d) + 2)

def find_max_decline():
    input = sys.stdin.read
    p, a, b, c, d, n = map(int, input().split())
    
    max_price = calculate_price(p, a, b, c, d, 1)
    max_decline = 0.0
    
    for k in range(2, n + 1):
        current_price = calculate_price(p, a, b, c, d, k)
        if current_price > max_price:
            max_price = current_price
        decline = max_price - current_price
        if decline > max_decline:
            max_decline = decline
    
    print(f"{max_decline:.6f}")

if __name__ == "__main__":
    find_max_decline()
