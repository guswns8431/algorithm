#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

int n;
std::vector<std::pair<int, int> > room;
int answer = 1;

void input_setting()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
}

void input()
{
    std::cin >> n;
    room.resize(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> room[i].first;
        std::cin >> room[i].second;
    }
}

bool compare(std::pair<int,int> a, std::pair<int,int> b)
{
    return (a.second < b.second);
}

void solution()
{
    int min;
    std::sort(room.begin(), room.end());
    std::sort(room.begin(), room.end(), compare);

    min = room[0].second;
    for (int i = 1; i < n; i++)
    {
        if (room[i].first >= min)
        {
            min = room[i].second;
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