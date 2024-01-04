#include <iostream>
#include <cstring>
#define YES 1
#define NO 0

std::string str;

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

bool check()
{
    int len;
    int j;

    len = str.length() / 2;
    for (int i = 0; i < len; i++)
    {
        j = str.length() - 1 - i;
        if (str[i] != str[j])
        {
            return (NO);
        }
    }
    return (YES);
}

void print(int flag)
{
    if (flag)
    {
        std::cout << "yes\n";
    }
    else
    {
        std::cout << "no\n";
    }
}

void solution()
{
    int len;
    int j;
    int flag;

    while (1)
    {
        input();
        if (str[0] == '0')
        {
            return ;
        }
        if(check())
        {
            print(YES);
        }
        else
        {
            print(NO);
        }
    }
}

int main(void)
{
    input_setting();
    solution();
    return (0);
}