from collections import defaultdict

def count_warnings():
    n = int(input().strip())
    food_count = defaultdict(int)
    total_food = 0
    warnings = 0
    
    for _ in range(n):
        child = input().strip()
        
        if food_count[child] > total_food - food_count[child]:
            warnings += 1
        
        food_count[child] += 1
        total_food += 1
    
    print(warnings)

if __name__ == "__main__":
    count_warnings()