import math

def calculate_distance(color1, color2):
    """Calculate Euclidean distance between two RGB colors"""
    r1, g1, b1 = color1
    r2, g2, b2 = color2
    return math.sqrt((r2-r1)**2 + (g2-g1)**2 + (b2-b1)**2)

def find_closest_color(target_color, target_set):
    """Find the closest color from the target set to the given color"""
    min_distance = float('inf')
    closest_color = None
    
    for color in target_set:
        distance = calculate_distance(target_color, color)
        if distance < min_distance:
            min_distance = distance
            closest_color = color
            
    return closest_color

def main():
    # Read target set (first 16 colors)
    target_set = []
    colors_to_map = []
    
    while True:
        try:
            r, g, b = map(int, input().split())
            
            # Check for termination condition
            if r == -1 and g == -1 and b == -1:
                break
                
            color = (r, g, b)
            
            # First 16 colors go to target set, rest to colors_to_map
            if len(target_set) < 16:
                target_set.append(color)
            else:
                colors_to_map.append(color)
                
        except EOFError:
            break
    
    # Process each color and find its closest match
    for color in colors_to_map:
        closest = find_closest_color(color, target_set)
        print(f"({color[0]},{color[1]},{color[2]}) maps to ({closest[0]},{closest[1]},{closest[2]})")

if __name__ == "__main__":
    main()