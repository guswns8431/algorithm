#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int value;
    int t;
    
    cin >> t;
    
    for(int j = 0 ; j < t ; j++)
    {
        cin >> a >> b;
        
        value = a;
        if(b == 1)
        {
            value %= 10;
        }
        else
        {
            for(int i = 0 ; i < b - 1; i++)
            {
                value = value * a % 10;
            }
        }
        
        if(value == 0)
        {
            cout << "10" << endl;
        }
        else
        {
            cout << value << endl;
        }
    }
    return 0;
}
