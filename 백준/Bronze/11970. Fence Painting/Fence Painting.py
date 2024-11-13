def total_painted_length(a, b, c, d):
    # Find the smallest and largest points to determine the overall range
    start = min(a, c)
    end = max(b, d)
    
    # Calculate the total length covered individually
    length_fj = b - a
    length_bessie = d - c
    
    # Calculate the overlap between the two intervals
    overlap_start = max(a, c)
    overlap_end = min(b, d)
    overlap = max(0, overlap_end - overlap_start)
    
    # Total painted length is the sum minus the overlap
    total_length = (length_fj + length_bessie) - overlap
    return total_length

# Read inputs
a, b = map(int, input().split())
c, d = map(int, input().split())

# Calculate and print the result
print(total_painted_length(a, b, c, d))
