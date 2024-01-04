#include <iostream>
#include <vector>

int n, kim, lim;
std::vector<int> players;
int answer = 1;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> kim >> lim;
	players.resize(n + 2, 0);
	for (int i = 1; i <= n; i++)
		players[i] = i;
}

bool check_kim_lim(int p1, int p2)
{
	if ((p1 == kim && p2 == lim) || (p1 == lim) && (p2 == kim))
		return (1);
	return (0);
}

bool check_kim(int p1, int p2)
{
	if (p1 == kim || p2 == kim)
		return (1);
	return (0);
}

bool check_lim(int p1, int p2)
{
	if (p1 == lim || p2 == lim)
		return (1);
	return (0);
}

void print()
{
	std::cout << answer;
}

void solution()
{
	int player1, player2;
	int i = 0;
	int j = 1;

	while (players[++i] != 0)
	{
		player1 = i;
		player2 = ++i;
		if (players[player2] == 0)
		{
			players[j] = player1;
			answer++;
			i = 0;
			j = 1;
		}
		else if (check_kim_lim(player1, player2))
		{
			print();
			return ;
		}
		else if (check_kim(player1, player2))
			players[j] = kim;
		else if (check_lim(player1, player2))
			players[j] = lim;
		else
			players[j] = i;
		if (players[++i] == 0)
		{
			i = 0;
			players[j] = 0;
		}
		j++;
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
