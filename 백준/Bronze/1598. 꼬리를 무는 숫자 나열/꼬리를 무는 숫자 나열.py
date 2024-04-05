def get_position(current):
    pos_current_col = 0
    pos_current_row = 0
    for i in range(1, 5):
        inter = abs(current - i)
        if inter % 4 == 0:
            pos_current_col = 1 + (inter / 4)
            pos_current_row = i
            break
    return pos_current_col, pos_current_row


a, b = map(int, input().split())

positionACol, positionARow = get_position(a)
positionBCol, positionBRow = get_position(b)

answer = abs(positionACol - positionBCol) + abs(positionARow - positionBRow)
print(int(answer))
