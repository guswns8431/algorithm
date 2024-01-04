#include <iostream>
using namespace std;

int main()
{
    int a;
    int max,min;
    int tmp;
    
    cin >> a;
    
    for(int i = 0 ; i < a ; i++)
    {
        cin >> tmp;
        if(i == 0)
        {
            max = tmp;
            min = tmp;
        }
        if(tmp > max)
        {
            max = tmp;
        }
        if(tmp < min)
        {
            min = tmp;
        }
    }
    
    cout << min << " " << max << endl;
    
    return 0;
}

