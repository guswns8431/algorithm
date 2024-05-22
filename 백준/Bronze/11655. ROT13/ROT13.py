input_str = input()

for char in input_str:
    convert_ord = ord(char) + 13
    if char.isalpha():
        if char.isupper():
            if convert_ord >= 65 and convert_ord <= 90:
                print(chr(convert_ord), end="")
            else:
                print(chr(convert_ord - 91 + 65), end="")
        else:
            if char.islower():
                if convert_ord >= 97 and convert_ord <= 122:
                    print(chr(convert_ord), end="")
                else:
                    print(chr(convert_ord - 123 + 97), end="")
    else:
        print(char, end="")