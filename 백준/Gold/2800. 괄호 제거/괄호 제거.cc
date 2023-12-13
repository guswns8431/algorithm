#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <set>

using namespace std;

bool visited[201];
bool ch[201];
set<string> ans;
string str;
vector<pair<int, int>> p;

void dfs(int cnt, int idx) {
	if (cnt >= 1) {
		string s = "";
		for (int i = 0; i < str.size(); i++) {
			if (ch[i]) continue;
			s += str[i];
		}
		ans.insert(s);
	}
	for (int i = idx; i < p.size(); i++) {
		if (visited[i]) continue;
		visited[i] = true;
		ch[p[i].first] = true;
		ch[p[i].second] = true;
		dfs(cnt + 1, idx + 1);
		visited[i] = false;
		ch[p[i].first] = false;
		ch[p[i].second] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> str;
	stack<int> s;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			s.push(i);
		}
		else if (str[i] == ')') {
			p.push_back({ s.top(), i });
			s.pop();
		}
	}
	dfs(0, 0);
	for (auto x : ans) {
		cout << x << "\n";
	}
	return 0;
}