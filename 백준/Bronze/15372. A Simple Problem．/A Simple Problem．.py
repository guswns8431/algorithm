import sys
input = sys.stdin.read

def solve():
    data = input().split()
    T = int(data[0])
    results = []
    for i in range(1, T + 1):
        N = int(data[i])
        results.append(N * N)
    sys.stdout.write("\n".join(map(str, results)) + "\n")

if __name__ == "__main__":
    solve()