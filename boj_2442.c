#include <iostream>
using namespace std;

int main()
{
    int n;
    int maxStar = 0;
    int beginStar = 0;
    int endStar = 0;
    int currentStar = 0;
    
    cin >> n;
    
    maxStar = 2 * n - 1;
    
    for(int i = 1 ; i <= n; i++)
    {
        currentStar = 2 * i - 1;
        beginStar = (maxStar - currentStar) / 2 + 1;
        endStar = maxStar - beginStar + 1;
        for(int j = 1 ; j <= endStar ; j++)
        {
            if(j >= beginStar && j <= endStar)
            {
                cout << "*";
            }
            else
            {
                cout <<" ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}
