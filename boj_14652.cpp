#include <iostream>
using namespace std;

int main()
{
    int n,m,k;
    int count = 0;
    
    cin >> n >> m >> k;
    
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(count == k)
            {
                cout << i << " " << j;
                return 0;
            }
            count++;
        }
    }
    
    return 0;
}
