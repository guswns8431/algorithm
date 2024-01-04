class Solution {
    func isRobotBounded(_ instructions: String) -> Bool {
        var dir = 0, x = 0, y = 0;
        
        for str in instructions {
            if (str == "G")
            {
                if (dir == 0)
                {
                    y += 1;
                } else if (dir == 1)
                {
                    x -= 1;
                } else if (dir == 2)
                {
                    y -= 1;
                } else
                {
                    x += 1;
                }
            } else if (str == "L")
            {
                dir -= 1;
                dir = (dir + 4) % 4;
            } else
            {
                dir += 1;
                dir %= 4;
            }
        }
        return (x == 0 && y == 0 || dir != 0)
    }
}
