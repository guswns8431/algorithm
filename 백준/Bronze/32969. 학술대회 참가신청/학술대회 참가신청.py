digital_humanities = ["social", "history", "language", "literacy"]
public_bigdata = ["bigdata", "public", "society"]

user_input = input()

for word in digital_humanities:
    if word in user_input:
        print("digital humanities")
        exit(0)
print("public bigdata")