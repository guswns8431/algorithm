#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int n;
int answer = 2147483647;
vector<bool> check;
vector<vector<int>> stat;

void dfs(int idx, int person)
{
	if ((n / 2) == person)
	{
		vector<int> start;
		vector<int> link;
		int start_score = 0;
		int link_score = 0;

		for (int i = 0; i < n; i++)
		{
			if (check[i])
				start.push_back(i);
			else
				link.push_back(i);
		}
		for (int i = 0; i < n / 2; i++)
		{
			for (int j = i + 1; j < n / 2; j++)
			{
				start_score += (stat[start[i]][start[j]] + stat[start[j]][start[i]]);
				link_score += (stat[link[i]][link[j]] + stat[link[j]][link[i]]);
			}
		}
		answer = min(answer, abs(start_score - link_score));
		return ;
	}

	for (int i = idx; i < n; i++)
	{
		if (!check[i])
		{
			check[i] = true;
			dfs(i + 1, person + 1);
			check[i] = false;
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	check.resize(n);
	stat.resize(n, vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> stat[i][j];
	dfs(0, 0);
	cout << answer;
}