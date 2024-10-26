import math

def can_plug_in():
    n, d = map(int, input().split())
    holes = []
    
    for _ in range(n):
        x, y, t = map(int, input().split())
        holes.append((x, y, t))
    
    for i in range(n):
        for j in range(n):
            if holes[i][2] != holes[j][2]:  # Different types (phase and neutral)
                distance = math.sqrt((holes[i][0] - holes[j][0]) ** 2 + (holes[i][1] - holes[j][1]) ** 2)
                if distance == d:
                    print("Yes")
                    return
    
    print("No")

if __name__ == "__main__":
    can_plug_in()
