#include <iostream>
#include <queue>
using namespace std;

//true를 반환하게 되면 swap이 동작하기 때문에 루트에 최솟값 정렬
struct cmp {
	bool operator()(int a, int b)
	{
		return a > b;
	}
};

int main(void)
{
	priority_queue<int, vector<int>, cmp> pq;
	int n;
	int input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> input;
			pq.push(input);
		}
		while (pq.size() > (unsigned int)n)
			pq.pop();
	}
	cout << pq.top();
	return (0);
}