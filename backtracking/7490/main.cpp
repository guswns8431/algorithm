#include <iostream>
#include <vector>

int t;
std::string answer = "";
std::vector<int> number;
char operation[3] = {'+', '-', ' '};

void input_setting()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

void input()
{
    std::cin >> t;
}

void init_number(int n)
{
    int tmp = 0;

    for (int i = 0; i < n; i++)
        number[i] = ++tmp;
}

int calculate()
{
    int tmp = 0;
    int minus;
    int sum = 0;

    for (int i = 0; i < answer.length(); i++)
    {
        if (answer[i] >= '1' && answer[i] <= '9')
            tmp += answer[i] - '0';
        else if (answer[i] == ' ')
        {
            tmp *= 10;
            continue ;
        }
        else if (answer[i] == '-')
        {
            minus = -1;
            sum += tmp * minus;
            tmp = 0;
        }
        else
        {
            minus = 1;
            sum += tmp * minus;
            tmp = 0;
        }
    }
    return (sum);
}

void backtracking(int depth, int n, int idx)
{
    if (depth == n)
    {
        if(calculate() == 0)
            std::cout << answer;
        return ;
    }
    for (int i = idx; i < 3; i++)
    {
        answer += number[i];
        answer += operation[i];
        backtracking(depth + 1, n, idx + 1);
        answer = answer.substr(0, answer.length() - 1);
    }
}

void solution()
{
    int n;

    for (int i = 0; i < t; i++)
    {
        std::cin >> n;
        number.resize(n);
        init_number(n);
        backtracking(0, n, 0);
        std::cout << "\n";
        answer = "";
    }
}

int main(void)
{
    input_setting();
    input();
    solution();
    return (0);
}