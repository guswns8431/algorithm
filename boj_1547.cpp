#include <iostream>
using namespace std;

int main()
{
    int m;
    int index[4] = {0,1,2,3};
    int input1,input2;
    
    cin >> m;
    
    for(int i = 0 ; i < m ; i++)
    {
        cin >> input1 >> input2;
        if(input1 == 1)
        {
            index[1] = input2;
        }
        else if(input2 == 1)
        {
            index[1] = input1;
        }
        else
        {
            continue;
        }
    }
    cout << index[1];
    
    return 0;
}
