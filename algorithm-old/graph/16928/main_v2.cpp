#include <iostream>
#include <queue>

int n, m;
int map[101];
int visited[101];

void input_setting()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

void input()
{
    int tmp1, tmp2;

    std::cin >> n >> m;
    for (int i = 1; i <= 100; i++)
    {
        map[i] = i;
    }
    for (int i = 0; i < n + m; i++)
    {
        std::cin >> tmp1 >> tmp2;
        map[tmp1] = tmp2;
    }
}

void solution()
{
    std::queue<int> q;
    int next;
    int node;

    q.push(1);
    visited[1] = 0;
    while (!q.empty())
    {
        node = q.front();
        q.pop();
        for (int i = 1; i <= 6; i++)
        {
            next = map[node + i];
            if (next >= 1 && next <= 100 && !visited[next])
            {
                visited[next] = visited[node] + 1;
                q.push(next);
            }
        }
    }
}

void print()
{
    std::cout << visited[100];
}

int main(void)
{
    input_setting();
    input();
    solution();
    print();
    return (0);
}