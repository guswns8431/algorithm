#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int count_apt = 0;
vector<vector<int> > apt;
vector<vector<int> > visited;

void dfs(int i, int j)
{
	if (i < 0 || i >= n || j < 0 || j >= n || apt[i][j] == 0 || visited[i][j] == 1)
		return ;
	visited[i][j] = 1;
	count_apt++;
	dfs(i - 1, j);
	dfs(i, j + 1);
	dfs(i + 1, j);
	dfs(i, j - 1);
}

int main(void)
{
	int num = 0;
	vector<int> apt_num;
	string input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	apt.resize(n, vector<int>(n));
	visited.resize(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 0; j < n; j++)
		{
			apt[i][j] = input[j] - '0';
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (apt[i][j] == 1 && visited[i][j] == 0)
			{
				num++;
				dfs(i, j);
				apt_num.push_back(count_apt);
				count_apt = 0;
			}
		}
	}
	sort(apt_num.begin(), apt_num.end());

	cout << num << "\n";
	for (int i = 0; i < num; i++)
		cout << apt_num[i] << "\n";
	return (0);
}