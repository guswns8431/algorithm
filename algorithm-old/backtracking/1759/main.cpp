#include <iostream>
#include <algorithm>

int l, c;
char input_arr[15];
char answer[15];

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> l >> c;
	for (int i = 0; i < c; i++)
		std::cin >> input_arr[i];
	std::sort(input_arr, input_arr + c);
}

bool isVowel(int idx)
{
	if (input_arr[idx] == 'a' || input_arr[idx] == 'e' || input_arr[idx] == 'i' || input_arr[idx] == 'o' || input_arr[idx] == 'u')
		return (1);
	return (0);
}

void solution(int answer_index, int pre_index, int vowel, int consonant)
{
	if (answer_index == l)
	{
		if (vowel >= 1 && consonant >= 2)
		{
			for (int i = 0; i < l; i++)
				std::cout << answer[i];
			std::cout << "\n";
			return ;
		}
	}
	for (int i = pre_index + 1; i < c; i++)
	{
		answer[answer_index] = input_arr[i];
		if (isVowel(i))
			solution(answer_index + 1, i, vowel + 1, consonant);
		else
			solution(answer_index + 1, i, vowel, consonant + 1);
	}
}

int main(void)
{
	input_setting();
	input();
	solution(0, -1, 0, 0);
	return (0);
}
