#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int dp[2000];
    int inputArr[2000];
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fill(dp, &dp[2000], 1);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> inputArr[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
        if (inputArr[i] < inputArr[j])
            dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    cout << n - *max_element(dp, dp + n);
    return 0;
}