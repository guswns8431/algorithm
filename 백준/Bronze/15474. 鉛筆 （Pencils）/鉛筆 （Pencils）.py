import math

def find_minimum_cost():
    N, A, B, C, D = map(int, input().split())
    
    # Calculate the number of sets required for each type
    sets_x = math.ceil(N / A)
    sets_y = math.ceil(N / C)
    
    # Calculate the cost for each option
    cost_x = sets_x * B
    cost_y = sets_y * D
    
    # Output the minimum cost
    print(min(cost_x, cost_y))

if __name__ == "__main__":
    find_minimum_cost()
