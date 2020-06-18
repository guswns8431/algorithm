#include <iostream>
using namespace std;

int main()
{
    int k1,k2,k3,k4;
    int s1,s2,s3,s4;
    int sum1,sum2;
    
    cin >> k1 >> k2 >> k3 >> k4;
    cin >> s1 >> s2 >> s3 >> s4;
    
    sum1 = k1 + k2 + k3 + k4;
    sum2 = s1 + s2 + s3 + s4;
    
    if(sum1 > sum2)
    {
        cout << sum1;
    }
    else
    {
        cout << sum2;
    }
    
    return 0;
}
