import re

def count_distinct_integers():
    word = input().strip()
    numbers = re.findall(r'\d+', word)
    distinct_numbers = set(map(int, numbers))
    print(len(distinct_numbers))

if __name__ == "__main__":
    count_distinct_integers()