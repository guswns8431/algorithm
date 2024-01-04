#include <iostream>

std::string str;
int answer = 0;
int i = 0;
int num = 0;

void input_setting()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

void input()
{
    std::cin >> str;
}

bool is_num(int i)
{
    if (str[i] >= '0' && str[i] <= '9')
        return (true);
    return (false);
}

void getnum()
{
    for ( ; is_num(i); i++)
        num = num * 10 + (str[i] - '0');
}


void solution()
{
    int len = str.length();
    int sign = 1;

    while (i < len)
    {
        if (str[i] == '-')
        {
            ++i;
            sign = -1;
            getnum();
        }
        else if (str[i] == '+' && sign == -1)
        {
            ++i;
            getnum();
        }
        else if (is_num(i))
            getnum();
        else
            i++;
        answer += sign * num;
        num = 0;
    }
}

void print()
{
    std::cout << answer;
}

int main(void)
{
    input_setting();
    input();
    solution();
    print();
    return (0);
}