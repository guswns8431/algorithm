#include <iostream>
using namespace std;

int main()
{
    int n;
    int maxSpace = 0;
    int beginSpace = 0;
    int currentSpace = 0;
    int countSpace;
    
    cin >> n;
    
    maxSpace = 2 * n;
    
    for(int i = 2 ; i <= n+1 ; i++)
    {
        currentSpace = 2 * n - (2 * i - 1);
        beginSpace = (maxSpace - currentSpace) / 2 + 1;
        countSpace = 0;
        for(int j = 1 ; j <= maxSpace ; j++)
        {
            if((j >= beginSpace) && (currentSpace >= countSpace))
            {
                cout << " ";
                countSpace++;
            }
            else
            {
                cout << "*";
            }
            
        }
        cout << "\n";
    }
    
    for(int i = 1 ; i <= n ; i++)
    {
        currentSpace = 2 * i - 1;
        beginSpace = (maxSpace - currentSpace) / 2 + 1;
        countSpace = 0;
        
        for(int j = 1 ; j <= maxSpace ; j++)
        {
            if(j >= beginSpace && (currentSpace >= countSpace))
            {
                cout << " ";
                countSpace++;
            }
            else
            {
                cout << "*";
            }
            
        }
        
        cout << "\n";
    }
    
    return 0;
}
