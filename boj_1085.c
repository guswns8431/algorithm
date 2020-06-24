#include <iostream>
using namespace std;

int main()
{
    int min;
    int arr[4];
    
    for(int i = 0 ; i < 4 ; i++)
    {
        cin >> arr[i];
    }
    
    for(int i = 0 ; i < 4 ; i++)
    {
        if(i == 0)
        {
            min = arr[0];
        }
        if(i == 2)
        {
            if(min > (arr[i] - arr[0]))
            {
                min = arr[i] - arr[0];
            }
        }
        else if (i == 3)
        {
            if(min > (arr[i] - arr[1]))
            {
                min = arr[i] - arr[1];
            }
        }
        else
        {
            if(min > arr[i])
            {
                min = arr[i];
            }
        }
        
    }
    
    cout << min << endl;
    
    return 0;
    
}
