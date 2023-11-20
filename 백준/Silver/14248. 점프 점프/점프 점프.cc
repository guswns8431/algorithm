#include <iostream>
#include <vector>
using namespace std;

int n;
int s;
int answer = 0;;
vector<int> stones;
vector<bool> visited;

void dfs(int currentStone) {
	if (visited[currentStone])
		return ;
	answer++;
	visited[currentStone] = true;
	int nextLeftStone = currentStone - stones[currentStone];
	int nextRightStone = currentStone + stones[currentStone];

	if (nextLeftStone >= 1)
		dfs(nextLeftStone);
	if (nextRightStone <= n)
		dfs(nextRightStone);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	stones.resize(n + 1);
	visited.resize(n + 1);

	for (int i = 1; i <= n; i++)
		cin >> stones[i];
	cin >> s;
	dfs(s);

	cout << answer;
	return (0);
}