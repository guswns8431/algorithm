#include <string>
#include <vector>

using namespace std;

char itoa(int n)
{
    return (n + '0');
}

int solution(int n)
{
    int answer = 0;
    string tmp = "";
    
    while (1)
    {
        if (n < 3)
        {
            tmp += itoa(n % 3);
            break ;
        }
        tmp += itoa(n % 3);
        n /= 3;
    }
    for (int i = 0; i < tmp.size(); i++)
        answer = answer * 3 + (tmp[i] - '0');
    return answer;
}