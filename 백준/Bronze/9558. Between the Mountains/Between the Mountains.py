def find_min_altitude_difference():
    import sys
    input = sys.stdin.read
    data = input().splitlines()
    
    index = 0
    T = int(data[index])
    index += 1
    results = []
    
    for _ in range(T):
        mountain_1 = list(map(int, data[index].split()))[1:]
        mountain_2 = list(map(int, data[index + 1].split()))[1:]
        index += 2
        
        mountain_1.sort()
        mountain_2.sort()
        
        i, j = 0, 0
        min_diff = float('inf')
        
        while i < len(mountain_1) and j < len(mountain_2):
            diff = abs(mountain_1[i] - mountain_2[j])
            min_diff = min(min_diff, diff)
            
            if mountain_1[i] < mountain_2[j]:
                i += 1
            else:
                j += 1
        
        results.append(str(min_diff))
    
    sys.stdout.write("\n".join(results) + "\n")

if __name__ == "__main__":
    find_min_altitude_difference()
