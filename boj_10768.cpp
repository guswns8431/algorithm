#include <iostream>
using namespace std;

int main()
{
    int month,day;
    
    cin >> month;
    cin >> day;
    
    if(month == 2)
    {
        if(day == 18)
        {
            cout << "Special" << endl;
        }
        else if(day > 18)
        {
            cout << "After" << endl;
        }
        else
        {
            cout << "Before" << endl;
        }
    }
    else if(month > 2)
    {
        cout << "After" << endl;
    }
    else
    {
        cout << "Before" << endl;
    }
    
    return 0;
}
