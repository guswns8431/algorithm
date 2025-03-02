def max_lines(points):
    # Store all possible unique slopes
    slopes = set()
    
    # Iterate through all pairs of points
    n = len(points)
    for i in range(n):
        for j in range(i+1, n):
            x1, y1 = points[i]
            x2, y2 = points[j]
            
            # Calculate the slope
            # Handle vertical lines (infinite slope)
            if x1 == x2:
                slope = float('inf')
            else:
                # Calculate reduced form of the slope to handle precision issues
                dx = x2 - x1
                dy = y2 - y1
                
                # Ensure we have consistent representation for negative slopes
                if dx < 0:
                    dx, dy = -dx, -dy
                
                # Calculate GCD for slope reduction
                def gcd(a, b):
                    a, b = abs(a), abs(b)
                    while b:
                        a, b = b, a % b
                    return a
                
                g = gcd(dx, dy)
                slope = (dy // g, dx // g)
            
            slopes.add(slope)
    
    return len(slopes)

# Read input
N = int(input())
points = []
for _ in range(N):
    x, y = map(int, input().split())
    points.append((x, y))

# Output the result
print(max_lines(points))