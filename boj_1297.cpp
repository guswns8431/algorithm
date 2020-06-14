#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float diagnoal,height,width;
    float x;
    
    cin >> diagnoal >> height >> width;
    
    x = sqrt(pow(diagnoal,2) / (pow(height, 2) + pow(width,2)));
    
    cout << (int)(height * x) << " " << (int)(width * x) << endl;
    
    return 0;
}
