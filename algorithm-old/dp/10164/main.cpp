#include <iostream>
#include <vector>

int n, m, k;
std::vector<std::vector<int> > dp;
int x = -1,y = -1;

void input_setting()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

void input()
{
    std::cin >> n >> m >> k;
    dp.resize(n, std::vector<int>(m));
}

void init()
{
    for (int i = 0; i < m; i++)
        dp[0][i] = 1;
    for (int i = 1; i < n; i++)
        dp[i][0] = 1;
}

void get_k()
{
    if (k == 0)
        return ;
    if (k % m == 0)
    {
        x = k / m - 1;
        y = m - 1;
    }
    else
    {
        x = k / m;
        y = k % m - 1;
    }
}

void solution()
{
    init();
    get_k();
    for(int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (!(x == -1 && y == -1) && (i == x && j > y) || (j == y && i > x))
                dp[i][j] = dp[x][y];
            else
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
}

void print()
{
    std::cout << dp[n - 1][m - 1];
}

int main(void)
{
    input_setting();
    input();
    solution();
    print();
    return (0);
}