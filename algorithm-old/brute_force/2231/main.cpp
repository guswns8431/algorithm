#include <iostream>

int n;

void input_setting()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

void input()
{
    std::cin >> n;
}

int get_decomposition_sum(int n)
{
    int sum = n;

    while (1)
    {
        sum += n % 10;
        if (n < 10)
            break ;
        n /= 10;
    }

    return (sum);
}

void print(int answer)
{
    std::cout << answer;
}

void solution()
{
    int tmp;

    for (int i = 0; i <= 1000000; i++)
    {
        tmp = get_decomposition_sum(i); 
        if (tmp == n)
        {
            print(i);
            return ;
        }
        else if (tmp > n)
        {
            continue ;
        }
    }
    print(0);
}

int main(void)
{
    input_setting();
    input();
    solution();
    return (0);
}