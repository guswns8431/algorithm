#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int h, n;
    long long dp[31][31];
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
        fill(&dp[0][0], &dp[30][31], 0);

    cin >> h >> n;
    for (int i = 0; i < 31; i++)
        dp[0][i] = 1;
    for (int i = 1; i < 31; i++) {
        for (int j = i; j < 31; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    int answer = abs(h - n);
    cout << dp[answer][answer];
    return 0;
}
