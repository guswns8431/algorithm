#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	vector<int> answer;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	if (n != 1)
	{
		while (n > 1)
		{
			for (int i = 2; i <= n; i++)
			{
				if (n % i == 0)
				{
					n /= i;
					answer.push_back(i);
					break ;
				}
			}
		}
		for (unsigned int i = 0; i < answer.size(); i++)
			cout << answer[i] << "\n";
	}
	return (0);
}