import sys

def main():
    for line in sys.stdin:
        tokens = line.strip().split()
        if not tokens:
            continue
        A, B, C = map(int, tokens)
        max_moves = max(B - A, C - B) - 1
        print(max_moves)

if __name__ == "__main__":
    main()
