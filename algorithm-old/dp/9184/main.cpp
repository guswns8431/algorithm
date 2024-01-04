#include <iostream>

int m[21][21][21];

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

int w(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
		return (1);
	if (a > 20 || b > 20 || c > 20)
		return (w(20, 20, 20));
	if (m[a][b][c])
		return (m[a][b][c]);
	if (a < b && b < c)
	{
		m[a][b][c] = w(a, b, c - 1 ) + w(a, b - 1, c - 1) - w(a, b - 1, c);
		return (m[a][b][c]);
	}
	m[a][b][c] = w(a - 1, b, c) + w(a - 1, b -1 , c) + w(a - 1, b, c -1 ) - w(a - 1, b - 1, c - 1);
	return (m[a][b][c]);
}

void solution()
{
	int a, b, c;
	while (1)
	{
		std::cin >> a >> b >> c;

		if (a == -1 && b == -1 && c == -1)
			return ;
		std::cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
	}
}

int main(void)
{
	input_setting();
	solution();
	return (0);
}
