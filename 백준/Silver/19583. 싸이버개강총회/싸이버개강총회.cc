#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(void) {
	string s,e,q;
	int start, end, quit;
	string time, name;
	int tmp;
	unordered_map<string, int> attendance;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> s >> e >> q;

	start = 60 * stoi(s.substr(0, 2)) + stoi(s.substr(3, 2));
	end = 60 * stoi(e.substr(0, 2)) + stoi(e.substr(3, 2));
	quit = 60 * stoi(q.substr(0, 2)) + stoi(q.substr(3, 2));

	while (cin >> time >> name) {
		tmp = 60 * stoi(time.substr(0, 2)) + stoi(time.substr(3, 2));

		if (tmp <= start)
			attendance[name] = 1;
		else if (tmp >= end && tmp <= quit) {
			if (attendance[name] == 1) {
				attendance[name]--;
				answer++;
			}
		}
	}
	cout << answer;
	return (0);
}