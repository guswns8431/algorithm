wood = list(map(int, input().split()))

answer = sorted(wood)

i = 0

while i < len(wood):
    if i == len(wood) - 1 and answer != wood:
        i = 0
        continue
    if i != len(wood) - 1 and wood[i] > wood[i + 1]:
        wood[i], wood[i + 1] = wood[i + 1], wood[i]
        for j in range(len(wood)):
            print(wood[j], end=" ")
        print()
    i += 1
