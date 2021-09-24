#include <iostream>
#include <vector>
#define YES 1
#define NO 0

std::vector<std::string> str;
std::string answer;
int k;

void input_setting()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

void input()
{
    std::cin >> k;
    str.resize(k, "");
    for (int i = 0; i < k; i++)
    {
        std::cin >> str[i];
    }
}

bool is_palindrome(std::string tmp)
{
    int len;
    int j;

    len = tmp.length() / 2;
    for (int i = 0; i < len; i++)
    {
        j = tmp.length() - 1 - i;
        if (tmp[i] != tmp[j])
        {
            return (NO);
        }
    }
    return (YES);
}

bool check()
{
    int len;
    std::string tmp = "";

    for (int i = 0; i < k; i++)
    {
        len = str[i].length();
        tmp += str[i];
        for (int j = len - 1; j >= 0; j--)
        {
            if (i == j)
            {
                continue ;
            }
            tmp += str[j];
            if (is_palindrome)
            {
                answer = tmp;
                return (YES);
            }
        }
    }
    return (NO);
}

void print(int flag, std::string ans)
{
    if (flag)
    {
        std::cout << ans;
    }
    else
    {
        std::cout << "0\n";
    }
}

void solution()
{
    int T;

    std::cin >> T;
    for (int i = 0; i < T; i++)
    {
        input();
        if (check())
        {
            print(YES, answer);
        }
        else
        {
            print(NO, "");
        }
    }
}

int main(void)
{
    input_setting();
    solution();
    return (0);
}