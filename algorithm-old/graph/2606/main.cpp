#include <iostream>
#include <vector>
#include <queue>

int n;
int m;
std::vector<std::vector<int> > computer;
std::vector<bool> visited;
int answer = 0;

void input_setting()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

void input()
{
    int tmp1, tmp2;

    std::cin >> n;
    std::cin >> m;
    computer.resize(n + 1);
    visited.resize(n + 1);
    for (int i = 1; i <= m; i++)
    {
        std::cin >> tmp1 >> tmp2;
        computer[tmp1].push_back(tmp2);
        computer[tmp2].push_back(tmp1);
    }
}

void solution()
{
    std::queue<int> q;
    int next;

    visited[1] = true;
    q.push(1);
    while (!q.empty())
    {
        next = q.front();
        q.pop();
        for (int i = 0; i < computer[next].size(); i++)
        {
            if (visited[computer[next][i]])
                continue ;
            visited[computer[next][i]] = true;
            q.push(computer[next][i]);
            answer++;
        }
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