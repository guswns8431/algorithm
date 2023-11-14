#include <iostream>
#include <vector>
using namespace std;

int result;
int answer = 0;
bool visited[10001];
vector<int> computer[10001];

void dfs(int computerNumber)
{
	visited[computerNumber] = true;

	for (unsigned int i = 0; i < computer[computerNumber].size(); i++)
	{
		if (visited[computer[computerNumber][i]] == false)
		{
			dfs(computer[computerNumber][i]);
			result++;
		}
	}

}

int main(void)
{
	int n,m;
	vector<int> computerList;
	int a, b;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	computerList.resize(n + 1);

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		computer[b].push_back(a);
	}

	for (int i = 1; i <= n; i++)
	{
		result = 0;
		fill_n(visited, 10001, false);
		dfs(i);
		if (result > answer)
			answer = result;
		computerList[i] = result;
	}

	for (int i = 1; i <= n; i++)
		if (computerList[i] == answer)
			cout << i << " ";
	return (0);
}