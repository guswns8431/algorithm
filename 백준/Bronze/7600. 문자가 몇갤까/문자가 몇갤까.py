import sys

def count_unique_alphabets(s):
    unique_chars = set(c.lower() for c in s if c.isalpha())
    return len(unique_chars)

while True:
    line = sys.stdin.readline().strip()
    if line == "#":
        break
    print(count_unique_alphabets(line))
