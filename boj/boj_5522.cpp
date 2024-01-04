#include <iostream>
using namespace std;

int main()
{
    int input[5];
    int sum = 0;
    
    for(int i = 0 ; i < 5 ; i++)
    {
        cin >> input[i];
        sum += input[i];
    }
    
    cout << sum << endl;
    
    return 0;
}
