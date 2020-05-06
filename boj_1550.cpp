#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char input[6];
    int result = 0;
    int count = 1;)
    
    cin >> input;
    
    for(int i = strlen(input) - 1 ; i >= 0 ; i--)
    {
        if(input[i] >= '0' && input[i] <= '9')
        {
            result += (input[i] - '0') * count;
        }
        else
        {
            switch (input[i])
            {
                case 'A':
                    result += 10 * count;
                    break;
                case 'B':
                    result += 11 * count;
                    break;
                case 'C':
                    result += 12 * count;
                    break;
                case 'D':
                    result += 13 * count;
                    break;
                case 'E':
                    result += 14 * count;
                    break;
                case 'F':
                    result += 15 * count;
                    break;
            }
        }
        count *= 16;
    }
    
    cout << result;
    
    return 0;
}
