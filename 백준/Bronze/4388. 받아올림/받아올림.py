def count_carries(a, b):
    carry = 0
    count = 0
    while a > 0 or b > 0:
        digit_a = a % 10
        digit_b = b % 10
        if digit_a + digit_b + carry >= 10:
            carry = 1
            count += 1
        else:
            carry = 0
        a //= 10
        b //= 10
    return count

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    i = 0
    results = []
    while i < len(data):
        a = int(data[i])
        b = int(data[i + 1])
        if a == 0 and b == 0:
            break
        results.append(count_carries(a, b))
        i += 2
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()
