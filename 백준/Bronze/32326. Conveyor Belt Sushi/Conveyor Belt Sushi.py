def calculate_cost():
    R = int(input())
    G = int(input())
    B = int(input())
    
    cost = (R * 3) + (G * 4) + (B * 5)
    print(cost)

if __name__ == "__main__":
    calculate_cost()