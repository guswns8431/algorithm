def find_closest():
    X, L, R = map(int, input().split())
    
    # Ensure the value is between L and R
    if X < L:
        print(L)
    elif X > R:
        print(R)
    else:
        print(X)

if __name__ == "__main__":
    find_closest()
