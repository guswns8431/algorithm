#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int input1, input2;
	vector<int> answer;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> input1 >> input2;
	answer.resize(input1 + input2);

	for (unsigned int i = 0; i < answer.size(); i++)
		cin >> answer[i];
	sort(answer.begin(), answer.end());
	for (unsigned int i = 0; i < answer.size(); i++)
		cout << answer[i] << " ";
	return (0);
}