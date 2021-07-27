#include <iostream>
#include <vector>
#include <cmath>
#include <stack>

int a, b;
int m;
std::vector<int> digit;
std::stack<int> answer;

void input_setting()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

void input()
{
    std::cin >> a >> b;
    std::cin >> m;
    digit.resize(m);
    for (int i = 0; i < m; i++)
        std::cin >> digit[i];
}

void solution()
{
    int tmp = 0;

    for (int i = 0; i < m; i++)
    {
        tmp += digit[i] * pow(a, m - 1 - i);
    }
    while (1)
    {        
        if (tmp < b)
        {
            answer.push(tmp);
            return ;
        }
        answer.push(tmp % b);
        tmp /= b;
    }
}

void print()
{
    while (!answer.empty())
    {
        std::cout << answer.top() << " ";
        answer.pop();
    }
}

int main(void)
{
    input_setting();
    input();
    solution();
    print();
    return (0);
}