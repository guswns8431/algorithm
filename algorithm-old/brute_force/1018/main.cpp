#include <iostream>
#include <vector>

int n,m;
int answer = 2147483647;
std::vector<std::vector<int> > board;

void input_setting()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

void input()
{
    std::string str;

    std::cin >> n >> m;
    board.resize(n, std::vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        std::cin >> str;
        for (int j = 0; j < m; j++)
        {
            if (str[j] == 'W')
            {
                board[i][j] = 0;
            }
            else
            {
                board[i][j] = 1;
            }
        }
    }
}

void get_count(int row, int col)
{
    int set1[8][8] = {
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0}
    };
    int set2[8][8] = {
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1}
    };
    int count_set1 = 0;
    int count_set2 = 0;

    for (int i = row; i < 8 + row; i++)
    {
        for (int j = col; j < 8 + col; j++)
        {
            if (set1[i - row][j - col] != board[i][j])
                ++count_set1;
            if (set2[i - row][j - col] != board[i][j])
                ++count_set2;
        }
    }
    if (count_set1 < answer)
    {
        answer = count_set1;
    }
    if (count_set2 < answer)
    {
        answer = count_set2;
    }
}

void solution()
{
    for (int i = 0; i <= n - 8; i++)
    {
        for (int j = 0; j <= m - 8; j++)
        {
            get_count(i, j);
        }
    }
}

void print()
{
    std::cout << answer;
}

int main(void)
{
    input_setting();
    input();
    solution();
    print();
    return (0);
}