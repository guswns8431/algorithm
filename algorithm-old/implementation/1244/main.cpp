#include <iostream>
#include <vector>

int sw_num;
int stu_num;
std::vector<int> sw_state;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> sw_num;
	sw_state.resize(sw_num + 1);
	for (int i = 1; i <= sw_num; i++)
		std::cin >> sw_state[i];
	std::cin >> stu_num;
}

void reverse_sw(int index)
{
	if (sw_state[index] == 1)
		sw_state[index] = 0;
	else
		sw_state[index] = 1;
}

void check_symmetry(int num)
{
	int i;

	i = 1;
	while ((num - i != 0) && (num + i != (sw_num + 1)))
	{
		if (sw_state[num - i] == sw_state[num + i])
		{
			reverse_sw(num - i);
			reverse_sw(num + i);
			i++;
			continue ;
		}
		break ;
	}
	reverse_sw(num);
}

void print()
{
	int cnt;

	cnt = 0;
	for (int i = 1; i <= sw_num; i++)
	{
		std::cout << sw_state[i];
		if (++cnt == 20)
        {
			std::cout << "\n";
            cnt = 0;
        }
		else
			std::cout << " ";
	}
}

void solution()
{
	int student;
	int num;

	for (int i = 0; i < stu_num; i++)
	{
		std::cin >> student >> num;
		if (student == 1)
		{
			for (int j = 1; j <= sw_num; j++)
				if (j % num == 0)
					reverse_sw(j);
		}
		else
			check_symmetry(num);
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
