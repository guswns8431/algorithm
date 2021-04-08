#include <iostream>
#include <stack>

std::stack<char> left_stack;
std::stack<char> right_stack;
int m;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::string str;

	std::cin >> str;
	for (int i = 0; i < str.size(); i++)
		left_stack.push(str[i]);
	std::cin >> m;
}

void process_p()
{
	char cmd;

	std::cin >> cmd;
	left_stack.push(cmd);
}

void process_l()
{
	if (!left_stack.empty())
	{
		right_stack.push(left_stack.top());
		left_stack.pop();
	}
}

void process_d()
{
	if (!right_stack.empty())
	{
		left_stack.push(right_stack.top());
		right_stack.pop();
	}
}

void process_b()
{
	if(!left_stack.empty())
		left_stack.pop();
}

void print()
{
	while(!right_stack.empty())
	{
		std::cout << right_stack.top();
		right_stack.pop();
	}
}

void solution()
{
	char cmd;

	for (int i = 0; i < m; i++)
	{
		std::cin >> cmd;
		if (cmd == 'P')
			process_p();
		else if (cmd == 'L')
			process_l();
		else if (cmd == 'D')
			process_d();
		else
			process_b();
	}
	while (!left_stack.empty())
	{
		right_stack.push(left_stack.top());
		left_stack.pop();
	}
	print();
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
