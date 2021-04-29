#include <iostream>
#include <deque>

int n;
std::deque<int> d;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
}

void push_front()
{
	int x;

	std::cin >> x;
	d.push_front(x);
}

void push_back()
{
	int x;

	std::cin >> x;
	d.push_back(x);
}

void pop_front()
{
	if (!d.empty())
	{
		std::cout << d.front();
		d.pop_front();
	}
	else
		std::cout << "-1";
	std::cout << "\n";
}

void pop_back()
{
	if (!d.empty())
	{
		std::cout << d.back();
		d.pop_back();
	}
	else
		std::cout << "-1";
	std::cout << "\n";
}

void size()
{
	std::cout << d.size();
}

void empty()
{
	if (d.empty())
		std::cout << "1";
	else
		std::cout << "0";
	std::cout << "\n";
}

void front()
{
	if (!d.empty())
		std::cout << d.front();
	else
		std::cout << "-1";
	std::cout << "\n";
}

void back()
{
	if (!d.empty())
		std::cout << d.back();
	else
		std::cout << "-1";
	std::cout << "\n";
}

void solution()
{
	std::string cmd;

	for (int i = 0; i < n; i++)
	{
		std::cin >> cmd;
		if (cmd == "push_front")
			push_front();
		else if (cmd == "push_back")
			push_back();
		else if (cmd == "pop_front")
			pop_front();
		else if (cmd == "pop_back")
			pop_back();
		else if (cmd == "size")
			size();
		else if (cmd == "empty")
			empty();
		else if (cmd == "front")
			front();
		else
			back();
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
