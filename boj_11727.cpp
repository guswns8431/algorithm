#include <iostream>

int main()
{
    int n;
    int dp[1001];

    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            dp[i] = 1;
        }
        else if (i == 2)
        {
            dp[i] = 3;
        }
        else
        {
            dp[i] = (dp[i - 1] % 10007 + dp[i - 2] * 2 % 10007) % 10007;
        }
    }

    std::cout << dp[n];

    return 0;
}
