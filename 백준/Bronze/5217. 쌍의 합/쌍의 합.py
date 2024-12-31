test_case = int(input())
for _ in range(test_case):
    answer = ""
    n = int(input())
    print(f"Pairs for {n}:", end="")
    for i in range(1, n):
        for j in range(i, n+1):
            if i + j == n and i != j:
                answer += " " + str(i) + " " + str(j) + ","
    answer = answer.rstrip(",")
    print(answer)