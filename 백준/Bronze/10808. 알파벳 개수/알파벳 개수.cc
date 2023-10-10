#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;
	int cnt[26] = {0,};

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> input;
	for (unsigned int i = 0; i < input.size(); i++)
		cnt[input[i] - 'a']++;
	for (int i = 0; i < 26; i++)
		cout << cnt[i] << " ";
	return (0);
}