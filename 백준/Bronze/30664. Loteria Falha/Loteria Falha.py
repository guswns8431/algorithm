while True:
    user_input = int(input())
    if user_input == 0:
        break
    if user_input % 42 == 0:
        print("PREMIADO")
    else:
        print("TENTE NOVAMENTE")