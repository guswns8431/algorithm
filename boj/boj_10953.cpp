#include <iostream>
using namespace std;

int main()
{
    int T;
    char input[3];
    
    cin >> T;
    
    for(int i = 0 ; i < T ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cin >> input[j];
            if(j == 2)
            {
                cout << input[0] + input[2] - 96 << endl;
            }
        }
    }
    
    return 0;
    
}
