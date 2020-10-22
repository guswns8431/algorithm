#include <iostream>

int main()
{
    int n;
    int dp[1000001];
    int tmp;

    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            dp[i] = 0;
        }
        else if (i == 2)
        {
            dp[i] = 1;
        }
        else if (i == 3)
        {
            dp[i] = 1;
        }
        else
        {
            dp[i] = dp[i - 1] + 1;
            if (i % 2 == 0)
            {
                dp[i] = (dp[i] > dp[i / 2]) ? dp[i / 2] + 1 : dp[i];
            }
            if (i % 3 == 0)
            {
                dp[i] = (dp[i] > dp[i / 3]) ? dp[i / 3] + 1 : dp[i];
            }
        }
    }

    std::cout << dp[n];

    return 0;
}
