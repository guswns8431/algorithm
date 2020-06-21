#include <iostream>
using namespace std;

int main()
{
    int input[5][4];
    int totalSum[5] = {0,0,0,0,0};
    int maxValue = 0,maxIndex = 0;
    
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cin >> input[i][j];
            totalSum[i] += input[i][j];
        }
    }
    
    for(int i = 0 ; i < 5 ; i++)
    {
        if(maxValue < totalSum[i])
        {
            maxValue = totalSum[i];
            maxIndex = i;
        }
    }
    
    cout << maxIndex + 1 << " " << maxValue;
    
    return 0;
}
