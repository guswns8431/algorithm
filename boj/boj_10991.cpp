#include <iostream>
using namespace std;

int main()
{
    int n;
    int startStar;
    int countStar = 0;
    int maxStar;
    int continueStar;
    
    cin >> n;
    
    startStar = n;
    maxStar = n + n - 1;
    
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= maxStar ; j++)
        {
            if(startStar == j)
            {
                cout << "*";
                countStar++;
                if(countStar == i)
                {
                    break;
                }
            }
            else if(j == continueStar)
            {
                cout << "*";
                countStar++;
                continueStar += 2;
                if(countStar == i)
                {
                    break;
                }
            }
            else
            {
                cout << " ";
            }
        }
        startStar--;
        continueStar = startStar + 2;
        countStar = 0;
        cout << "\n";
    }
    
    return 0;
}
