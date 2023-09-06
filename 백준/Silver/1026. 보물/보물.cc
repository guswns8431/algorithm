#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;
	int answer = 0;
	vector<int> A;
	vector<int> B;

	cin >> N;
	A.resize(N);
	B.resize(N);

	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++)
		cin >> B[i];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<>());

	for (int i = 0; i < N; i++)
	{
		answer += A[i] * B[i];
	}

	cout << answer;
	return (0);
}