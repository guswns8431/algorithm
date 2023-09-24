#include <iostream>

std::string str;
int answer = 0;

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

void solution()
{
    int len = str.length();
    int sign = 1;
    int num = 0;
    int i = 0;

    while (i < len)
    {
        if (str[i] == '-')
        {
            ++i;
            sign = -1;
            for ( ; str[i] >= '0' && str[i] <= '9'; i++)
            {
                num = num * 10 + (str[i] - '0');
            }
        }
        else if (str[i] == '+' && sign == -1)
        {
            ++i;
            for ( ; str[i] >= '0' && str[i] <= '9'; i++)
            {
                num = num * 10 + (str[i] - '0');
            }
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            for ( ; str[i] >= '0' && str[i] <= '9'; i++)
            {
                num = num * 10 + (str[i] - '0');
            }
        }
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