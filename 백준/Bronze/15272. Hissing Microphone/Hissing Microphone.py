def detect_hissing():
    word = input().strip()
    
    if 'ss' in word:
        print("hiss")
    else:
        print("no hiss")

if __name__ == "__main__":
    detect_hissing()
