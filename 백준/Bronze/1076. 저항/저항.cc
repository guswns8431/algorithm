#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
	map<string, string> m;
	string answer = "";
	string input;
	bool flag1 = false;
	bool flag2 = false;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	m["black"] = "0";
	m["brown"] = "1";
	m["red"] = "2";
	m["orange"] = "3";
	m["yellow"] = "4";
	m["green"] = "5";
	m["blue"] = "6";
	m["violet"] = "7";
	m["grey"] = "8";
	m["white"] = "9";

	for (int i = 0; i < 2; i++)
	{
		cin >> input;
		if (i == 0 && input == "black")
		{
			flag1 = true;
			continue ;
		}
		else if (flag1 && input == "black")
		{
			flag2 = true;
			continue ;
		}
		answer += m[input];
	}
	cin >> input;
	if (flag2)
		answer = "0";
	else
	{
		for (int j = 0; j < stoi(m[input]); j++)
			answer += "0";
	}
	cout << answer;
	return (0);
}