#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int> > arr;
vector<int> answer;
vector<bool> visited;

void dfs(int node)
{
	int next;
	visited[node] = true;
	for (unsigned int i = 0; i < arr[node].size(); i++)
	{
		next = arr[node][i];
		if (!visited[next])
		{
			answer[next] = node;
			dfs(next);
		}
	}
}

int main(void)
{
	int input1, input2;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	arr.resize(n + 1);
	answer.resize(n + 1, 0);
	visited.resize(n + 1);
	for (int i = 2; i <= n; i++)
	{
		cin >> input1 >> input2;
		arr[input1].push_back(input2);
		arr[input2].push_back(input1);
	}
	dfs(1);
	for (int i = 2; i <= n; i++)
		cout << answer[i] << "\n";
	return (0);
}