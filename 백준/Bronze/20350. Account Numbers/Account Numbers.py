def validate_iban(iban):
    # 1. Move first 4 characters to the end
    rearranged = iban[4:] + iban[:4]
    
    # 2. Replace letters with digits (A=10, B=11, ..., Z=35)
    number = ""
    for char in rearranged:
        if char.isalpha():
            # Convert letter to corresponding number (A=10, B=11, etc)
            number += str(ord(char) - ord('A') + 10)
        else:
            number += char
    
    # 3. Interpret as decimal number and compute remainder modulo 97
    # Since the number might be too large for integer conversion,
    # we can use the property that (a * 10 + b) mod n = ((a mod n) * 10 + b) mod n
    remainder = 0
    for digit in number:
        remainder = (remainder * 10 + int(digit)) % 97
    
    # IBAN is valid if remainder is 1
    return remainder == 1

# Read input
iban = input().strip()

# Output result
print("correct" if validate_iban(iban) else "incorrect")