#include <iostream>
using namespace std;

int main()
{
    int input[4];
    int total = 0;
    
    for(int i = 0 ; i < 4 ; i++)
    {
        cin >> input[i];
        total += input[i];
    }
    
    cout << total / 60 << endl;
    cout << total % 60 << endl;
    
    return 0;
}
