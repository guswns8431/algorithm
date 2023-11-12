#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, k;
	vector<int> v;
	unordered_map<int, int> m;
	int leftIndex = 0, rightIndex = 0;
	int answer = 0, tmp = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;
	v.resize(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	while (leftIndex < n)
	{
		while (rightIndex < n)
		{
			if (m[v[rightIndex]] ==  k)
			{
				answer = max(answer, tmp);
				m[v[leftIndex]]--;
				tmp--;
				break ;
			}
			else if (m[v[rightIndex]])
				m[v[rightIndex]]++;
			else
				m[v[rightIndex]] = 1;
			tmp++;
			rightIndex++;
		}
		if (rightIndex == n)
		{
			answer = max(answer, tmp);
			break ;
		}
		leftIndex++;
	}
	cout << answer;
	return (0);
}