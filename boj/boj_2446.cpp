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
    
    maxSpace = 2 * n - 1;
    
    for(int i = 1 ; i <= n ; i++)
    {
        currentSpace = 2 * n - (2 * i - 1);
        beginSpace = (maxSpace - currentSpace) / 2 + 1;
        countSpace = 0;
        for(int j = 1 ; j <= maxSpace ; j++)
        {
            if(j >= beginSpace)
            {
                cout << "*";
                countSpace++;
            }
            else
            {
                cout << " ";
            }
            
            if(countSpace == currentSpace)
            {
                break;
            }
            
        }
        cout << "\n";
    }
    
    for(int i = 2 ; i <= n ; i++)
    {
        currentSpace = 2 * i - 1;
        beginSpace = (maxSpace - currentSpace) / 2 + 1;
        countSpace = 0;
        
        for(int j = 1 ; j <= maxSpace ; j++)
        {
            if(j >= beginSpace)
            {
                cout << "*";
                countSpace++;
            }
            else
            {
                cout << " ";
            }
            
            if(countSpace == currentSpace)
            {
                break;
            }
            
        }
        
        cout << "\n";
    }
    
    return 0;
}
