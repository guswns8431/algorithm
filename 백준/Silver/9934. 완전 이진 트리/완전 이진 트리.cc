#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int> > graph;
vector<int> answer;
vector<int> input;
int total;
int ind = 0;

void dfs(int idx)
{
	if (idx == -1)
		return ;
	dfs(graph[idx][0]);
	answer[idx] = input[ind++];
	dfs(graph[idx][1]);
}

int main(void)
{
	int k;
	int idx = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> k;
	total = pow(2, k) - 1;
	input.resize(total);
	for (int i = 0; i < total; i++)
		cin >> input[i];
	graph.resize(total);
	answer.resize(total);
	fill(graph.begin(), graph.end(), vector<int>(2, -1));
	for (int i = 0; idx < total - 1; i++)
	{
		graph[i][0] = ++idx;
		graph[i][1] = ++idx;
	}
	dfs(0);
	int l = 0;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < pow(2,i); j++)
			cout << answer[l++] << " ";
		cout << "\n";
	}
	return (0);
}