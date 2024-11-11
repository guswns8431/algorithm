import sys

def main():
    import sys
    sys.setrecursionlimit(1 << 25)
    A_str, B_str = sys.stdin.readline().split()
    A = int(A_str)
    B = int(B_str)
    q, r = divmod_custom(A, B)
    print(q)
    print(r)

def divmod_custom(A, B):
    assert B != 0
    q = A // B
    r = A - q * B
    if r < 0:
        if B > 0:
            q -= 1
            r += B
        else:
            q += 1
            r -= B
    return q, r

if __name__ == "__main__":
    main()
