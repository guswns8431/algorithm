def evaluate_polynomial(coefficients, x):
    result = 0
    power = 1
    for coefficient in coefficients:
        result += coefficient * power
        power *= x
    return result

def main():
    import sys
    input = sys.stdin.read
    data = input().strip().split('\n')
    
    i = 0
    results = []
    
    while i < len(data):
        # Read polynomial degree
        line = data[i].strip()
        if line == '0':
            break
        
        # Read polynomial coefficients
        parts = list(map(int, line.split()))
        N = parts[0]
        coefficients = parts[1:]
        
        # Read point coordinates
        i += 1
        x, y = map(int, data[i].strip().split())
        
        # Evaluate polynomial at point x
        poly_y = evaluate_polynomial(coefficients, x)
        
        # Determine position of the point
        if y < poly_y:
            results.append("Inside")
        elif y == poly_y:
            results.append("On")
        else:
            results.append("Outside")
        
        # Move to the next test case
        i += 1
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()
