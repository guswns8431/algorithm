def is_valid_team(team):
    lengths = [len(name) for name in team]
    avg_length = sum(lengths) / len(lengths)
    for length in lengths:
        if abs(length - avg_length) > 2:
            return False
    return True

def process_case(case_number, n, k, names):
    names.sort(key=len)
    
    for i in range(0, n, k):
        team = names[i:i+k]
        if not is_valid_team(team):
            print(f"Case {case_number}: no\n")
            return
    
    print(f"Case {case_number}: yes\n")

def main():
    import sys
    input = sys.stdin.read
    data = input().strip().split('\n')
    
    case_number = 1
    i = 0
    
    while i < len(data):
        n, k = map(int, data[i].strip().split())
        if n == 0 and k == 0:
            break
        
        i += 1
        names = []
        for _ in range(n):
            names.append(data[i].strip())
            i += 1
        
        process_case(case_number, n, k, names)
        case_number += 1

if __name__ == "__main__":
    main()
