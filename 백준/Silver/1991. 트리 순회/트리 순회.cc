#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<char> > graph;
bool visited[26];


void dfs1(char node)
{
	if (node == '.')
		return ;
	cout << node;
	for (unsigned int i = 0; i < 2; i++)
		dfs1(graph[node - 'A'][i]);
}

void dfs3(char node)
{
	if (node == '.')
		return ;
	for (unsigned int i = 0; i < 2; i++)
		dfs3(graph[node - 'A'][i]);
	cout << node;
}

void dfs2(char node)
{
	if (node == '.')
		return ;
	for (unsigned int i = 0; i < 2; i++)
	{
		dfs2(graph[node - 'A'][i]);
		if (!visited[node - 'A'])
		{
			visited[node - 'A'] = true;
			cout << node;
		}
	}
}

int main(void)
{
	int n;
	char input1,input2, input3;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	graph.resize(n, vector<char>(2));
	for (int i = 0; i < n; i++)
	{
		cin >> input1 >> input2 >> input3;
		graph[input1 - 'A'][0] = input2;
		graph[input1 - 'A'][1] = input3;
	}
	fill(visited, visited + 26, false);
	dfs1('A');
	cout << "\n";
	dfs2('A');
	cout << "\n";
	dfs3('A');
	return (0);
}