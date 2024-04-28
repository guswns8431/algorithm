flag = False
for i in range(5):
    string_input = input()
    if string_input.find('FBI') != -1:
        print(i + 1, sep=' ')
        flag = True
if flag == False:
    print("HE GOT AWAY!")
