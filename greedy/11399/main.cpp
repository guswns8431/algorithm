#include <iostream>
#include <vector>
#include <algorithm>

int n;
std::vector<int> times;
int answer = 0;

void input_setting()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

void input()
{
    std::cin >> n;
    times.resize(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> times[i];
    }
}

void solution()
{
    int tmp;

    tmp = n;
    std::sort(times.begin(), times.end());
    for (int i = 0; i < n; i++)
    {
        answer += times[i] * (tmp)--;
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