#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    vector<int> answer;
    int count_zero = 0;
    int max = 0;
    int min = 0;
    int j = 0;

    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());
    for (int i = 0; i < lottos.size(); i++)
    {
        if (lottos[i] == 0)
            count_zero++;
        else
        {
            while (1)
            {
                if (lottos[i] == win_nums[j])
                {
                    max++;
                    min++;
                    break ;
                }
                else if (lottos[i] < win_nums[j])
                {
                    j--;
                    break ;
                }
                else
                    j++;
            }
        }
    }
    max += count_zero;
    switch(max)
    {
        case 6 :
            answer.push_back(1);
            break ;
        case 5 :
            answer.push_back(2);
            break ;
        case 4 :
            answer.push_back(3);
            break ;
        case 3 :
            answer.push_back(4);
            break ;
        case 2 :
            answer.push_back(5);
            break ;
        default :
            answer.push_back(6);
            break ;
    }
    switch(min)
    {
        case 6 :
            answer.push_back(1);
            break ;
        case 5 :
            answer.push_back(2);
            break ;
        case 4 :
            answer.push_back(3);
            break ;
        case 3 :
            answer.push_back(4);
            break ;
        case 2 :
            answer.push_back(5);
            break ;
        default :
            answer.push_back(6);
            break ;
    }

    return answer;
}