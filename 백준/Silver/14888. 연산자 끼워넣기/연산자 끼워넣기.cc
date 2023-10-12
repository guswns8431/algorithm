#include <iostream>
using namespace std;
#define PLUS 0
#define MINUS 1
#define MUL 2

int n;
int arr[11];
int op[4];
int max_value = -1000000001;
int min_value = 1000000001;

void solution(int idx, int value)
{
	if (idx == n)
	{
		if (max_value < value)
			max_value = value;
		if (min_value > value)
			min_value = value;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (op[i] > 0)
		{
			op[i]--;
			if (i == PLUS)
				solution(idx + 1, value + arr[idx]);
			else if (i == MINUS)
				solution(idx + 1, value - arr[idx]);
			else if (i == MUL)
				solution(idx + 1, value * arr[idx]);
			else
				solution(idx + 1, value / arr[idx]);
			op[i]++;
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < 4; i++)
		cin >> op[i];
	solution(1, arr[0]);
	cout << max_value << "\n" << min_value;
	return (0);
}