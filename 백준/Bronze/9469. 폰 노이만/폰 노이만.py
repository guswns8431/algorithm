def calculate_fly_distance(D, A, B, F):
    # Time to collision is total distance divided by combined train speeds
    total_time = D / (A + B)
    
    # Fly's total distance is its speed multiplied by total time
    fly_distance = F * total_time
    
    return fly_distance

def main():
    # Read number of test cases
    P = int(input())
    
    # Process each test case
    for _ in range(P):
        # Read test case parameters
        N, D, A, B, F = map(float, input().split())
        
        # Calculate fly's distance
        distance = calculate_fly_distance(D, A, B, F)
        
        # Print result with 6 decimal places
        print(f"{int(N)} {distance:.6f}")

# Run the program
main()