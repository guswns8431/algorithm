def count_ppap(n, s):
    count = 0
    used = [False] * n  # Track used positions
    
    # Check each position as potential start of PPAP
    for i in range(n-3):  # Need at least 4 characters left
        # Skip if this position is already used
        if used[i]:
            continue
            
        # Check if we have pPAp pattern starting at i
        if (s[i] == 'p' and s[i+1] == 'P' and 
            s[i+2] == 'A' and s[i+3] == 'p' and 
            not any(used[i:i+4])):  # Check none of these positions are used
            
            # Mark these positions as used
            for j in range(i, i+4):
                used[j] = True
            count += 1
            
    return count

# Read input
n = int(input())
s = input().strip()
print(count_ppap(n, s))