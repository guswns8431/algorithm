#include <iostream>
#include <vector>

int n;
std::vector<std::vector<int> > dp;

void input_setting()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

void input()
{
    std::cin >> n;
    dp.resize(n + 1, std::vector<int>(10, 1));
}

void solution()
{
    long long sum;
    sum = 10;
    
    for (int i = 2; i <= n; i++)
    {
        dp[i][0] = sum;
        for (int j = 1; j <= 9; j++)
        {
        if (dp[i][j - 1] < dp[i - 1][j - 1])
            dp[i][j] = dp[i][j - 1] + 10007 - dp[i - 1][j - 1];
        else
            dp[i][j] = (dp[i][j - 1] - dp[i - 1][j - 1]);
        sum += dp[i][j] % 10007;
        sum %= 10007;
        }
    }
    std::cout << sum;
}

int main(void)
{
    input_setting();
    input();
    solution();
    return (0);
}
