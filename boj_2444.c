#include <iostream>
using namespace std;

int main()
{
    int n;
    int maxStar = 0;
    int beginStar = 0;
    int currentStar = 0;
    int countStar;
    
    cin >> n;
    
    maxStar = 2 * n - 1;
    
    for(int i = 1 ; i <= n ; i++)
    {
        currentStar = 2 * i - 1;
        beginStar = (maxStar - currentStar) / 2 + 1;
        countStar = 0;
        
        for(int j = 1 ; j <= maxStar ; j++)
        {
            if(j >= beginStar)
            {
                cout << "*";
                countStar++;
            }
            else
            {
                cout << " ";
            }
            
            if(countStar == currentStar)
            {
                break;
            }
        }
        
        cout << "\n";
    }
    
    for(int i = 2 ; i <= n ; i++)
    {
        currentStar = 2 * n - (2 * i - 1);
        beginStar = (maxStar - currentStar) / 2 + 1;
        countStar = 0;
        for(int j = 1 ; j <= maxStar ; j++)
        {
            if(j >= beginStar)
            {
                cout << "*";
                countStar++;
            }
            else
            {
                cout << " ";
            }
            
            if(countStar == currentStar)
            {
                break;
            }
        }
        cout << "\n";
    }
    
    return 0;
}
