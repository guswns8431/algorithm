import sys

n = int(sys.stdin.readline().strip())
words = {"".join(sorted(sys.stdin.readline().strip())) for _ in range(n)}

print(len(words))
