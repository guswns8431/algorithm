#include <iostream>
using namespace std;

int main()
{
    int station = 0;
    int enterPerson,exitPerson;
    int max = 0;
    
    for(int i = 0 ; i < 4 ; i++)
    {
        cin >> exitPerson >> enterPerson;
        station += enterPerson - exitPerson;
        
        if(max < station)
        {
            max = station;
        }
    }
    
    cout << max;
    return 0;
}
