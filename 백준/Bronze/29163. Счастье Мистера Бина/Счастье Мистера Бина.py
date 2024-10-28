def determine_mood():
    n = int(input().strip())
    numbers = list(map(int, input().split()))
    
    even_count = sum(1 for num in numbers if num % 2 == 0)
    odd_count = n - even_count
    
    if even_count > odd_count:
        print("Happy")
    else:
        print("Sad")

if __name__ == "__main__":
    determine_mood()