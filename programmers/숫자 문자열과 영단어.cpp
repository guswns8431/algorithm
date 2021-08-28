#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s)
{
    int answer = 0;
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        if(isdigit(s[i]))
            answer = answer * 10 + (s[i] - '0');
        else
        {
            if (s[i] == 'z')
            {
                i += 3;
                answer = answer * 10;
            }
            else if (s[i] == 'o')
            {
                i += 2;
                answer = answer * 10 + ('1' - '0');
            }
            else if (s[i] == 't')
            {
                ++i;
                if (s[i] == 'w')
                {
                    ++i;
                    answer = answer * 10 + ('2' - '0');
                }
                else
                {
                    i += 3;
                    answer = answer * 10 + ('3' - '0');
                }
            }
            else if (s[i] == 'f')
            {
                ++i;
                if (s[i] == 'o')
                {
                    i += 2;
                    answer = answer * 10 + ('4' - '0');
                }
                else
                {
                    i += 2;
                    answer = answer * 10 + ('5' - '0');
                }
            }
            else if (s[i] == 's')
            {
                ++i;
                if (s[i] == 'i')
                {
                    ++i;
                    answer = answer * 10 + ('6' - '0');
                }
                else
                {
                    i += 3;
                    answer = answer * 10 + ('7' - '0');
                }
            }
            else if (s[i] == 'e')
            {
                i += 4;
                answer = answer * 10 + ('8' - '0');
            }
            else
            {
                i += 3;
                answer = answer * 10 + ('9' - '0');
            }
        }
    }
    return answer;
}

int main(void)
{
    cout << solution("one4seveneight") << endl;
    cout << solution("23four5six7") << endl;
    cout << solution("2three45sixseven") << endl;
    cout << solution("123") << endl;
}