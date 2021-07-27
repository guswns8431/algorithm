#include <iostream>
#include <queue>

std::priority_queue<int> pq;
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

void print_and_pop()
{
    if (!pq.empty())
    {
        std::cout << pq.top() << "\n";
        pq.pop();
    }
    else
        std::cout << "0\n";
}

void solution()
{
    int x;

    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        if (x == 0)
            print_and_pop();
        else
            pq.push(x);
    }
}

int main(void)
{
    input_setting();
    input();
    solution();
    return (0);
}