#include <iostream>
#include <cstring>

char input_str[100001];

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin.getline(input_str, 100001);
}

int tag_handler(int i)
{
	while (input_str[i] != '>')
		std::cout << input_str[i++];
	std::cout << input_str[i];
	return (i);
}

int word_handler(int i, int len)
{
	int start, end;

	start = i;
	while (input_str[i] != '<' && input_str[i] != ' ' && i < len)
		++i;
	end = i - 1;
	for (int j = end; j >= start; j--)
		std::cout << input_str[j];
	if (input_str[i] == ' ')
		std::cout << ' ';
	else if (input_str[i] == '<')
		--i;
	return (i);
}

void solution()
{
	int len;

	len = strlen(input_str);
	for (int i = 0; i < len; i++)
	{
		if (input_str[i] == '<')
			i = tag_handler(i);
		else
			i = word_handler(i, len);
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
