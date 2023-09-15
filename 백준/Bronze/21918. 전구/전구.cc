#include <iostream>
#include <vector>
using namespace std;

vector<int> s;

void op1(int i, int x)
{
	s[i] = x;
}

void op2(int l, int r)
{
	for (int i = l; i <= r; i++)
	{
		if (s[i] == 1)
			s[i] = 0;
		else
			s[i] = 1;
	}
}

void op3(int l, int r)
{
	for (int i = l; i <= r; i++)
		s[i] = 0;
}

void op4(int l, int r)
{
	for (int i = l; i <= r; i++)
		s[i] = 1;
}

int main(void)
{
	int n,m;
	int a, b, c;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	s.resize(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> s[i];
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		if (a == 1)
			op1(b, c);
		else if (a == 2)
			op2(b, c);
		else if (a == 3)
			op3(b, c);
		else
			op4(b, c);
	}
	for (int i = 1; i <= n; i++)
		cout << s[i] << " ";
	return (0);
}