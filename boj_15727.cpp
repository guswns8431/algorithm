#include <iostream>
using namespace std;

int main()
{
    int a;
    int count = 0;

    cin >> a;

    while (1)
    {
        a -= 5;
        count++;
        if(a <= 0)
        {
            break;
        }
    }

    cout << count << endl;

    return 0;
    
}
