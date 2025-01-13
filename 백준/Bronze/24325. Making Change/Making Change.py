def calculate_change(cost, payment):
    change = int(round((payment - cost) * 100)) // 100  # Round to avoid floating point issues
    
    denominations = [50, 20, 10, 5, 1]
    result = []
    
    for bill in denominations:
        count = change // bill
        change = change % bill
        result.append(f"{count}-${bill}")
    
    return ", ".join(result)

def process_transactions():
    n = int(input())
    
    for _ in range(n):
        cost, payment = map(float, input().split())
        print(calculate_change(cost, payment))

# Run the program
process_transactions()