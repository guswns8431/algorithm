#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int arr[1001];
	int dp[1001];
	int a;
	//int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> a;
	for (int i = 1; i <= a; i++)
		cin >> arr[i];

	for (int i = 1; i <= a; i++) {
		dp[i] = arr[i];
		for (int j = 1; j < i; j++) {
			if (arr[j] < arr[i])
				dp[i] = max(dp[i], dp[j] + arr[i]);
		}
	}
	//for (int i = 1; i <= a; i++)
	//	answer = max(answer, dp[i]);
	//cout << answer;
	cout << *max_element(dp + 1, dp + a + 1);
	return (0);
}