#include <iostream>
#include <vector>
#include <cstring>

int n;
std::vector<int> queue;
std::vector<int>::iterator iter;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	queue.reserve(n);
	iter = queue.begin();
}

void push()
{
	int num;

	std::cin >> num;
	queue.push_back(num);
}

void pop()
{
	if (queue.empty())
	{
		std::cout << "-1" << "\n";
		return ;
	}
	else
		std::cout << *iter;
	std::cout << "\n";
	queue.erase(iter);
	iter = queue.begin();
}


void size()
{
	std::cout << queue.size() << "\n";
}

void empty()
{
	if (queue.empty())
		std::cout << "1";
	else
		std::cout << "0";
	std::cout << "\n";
}

void front()
{
	if (queue.empty())
		std::cout << "-1" << "\n";
	else
		std::cout << *iter << "\n";
}

void back()
{
	if (queue.empty())
		std::cout << "-1" << "\n";
	else
		std::cout << queue.back() << "\n";
}

void solution()
{
	std::string cmd;

	while (n--)
	{
		std::cin >> cmd;
		if (cmd == "push")
			push();
		else if (cmd == "pop")
			pop();
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
