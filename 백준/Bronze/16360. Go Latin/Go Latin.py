# Read the number of words
n = int(input())

# Define the mapping from English endings to pseudo-Latin endings
endings = [
    ('ne', 'anes'),
    ('n', 'anes'),
    ('a', 'as'),
    ('i', 'ios'),
    ('y', 'ios'),
    ('l', 'les'),
    ('o', 'os'),
    ('r', 'res'),
    ('t', 'tas'),
    ('u', 'us'),
    ('v', 'ves'),
    ('w', 'was')
]

# Process each word
for _ in range(n):
    word = input()
    for ending, mapping in endings:
        if word.endswith(ending):
            # Remove the ending and append the mapping
            transformed_word = word[:-len(ending)] + mapping
            print(transformed_word)
            break
    else:
        # If no ending matches, append 'us'
        print(word + 'us')
