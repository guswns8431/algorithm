#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int n;
std::vector<int> dp;

void input_setting()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

void input()
{
    std::cin >> n;
    dp.resize(n + 1);
}

void solution()
{
    dp[1] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1] + 1;
        for (int j = 2; j * j <= i; j++)
            dp[i] = std::min(dp[i], dp[i - j * j] + 1);
    }
}

void print()
{
    std::cout << dp[n];
}

int main(void)
{
    input_setting();
    input();
    solution();
    print();
    return (0);
}