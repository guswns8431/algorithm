#include <iostream>
using namespace std;

int main()
{
    int arr[3][4];
    int count = 0;
    int result[3];
    
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 0)
            {
                count++;
            }
        }
        result[i] = count;
        count = 0;
    }
    
    for(int i = 0 ; i < 3 ; i++)
    {
        switch (result[i]) {
            case 0:
                cout << "E\n";
                break;
                
            case 1:
                cout << "A\n";
                break;
            
            case 2:
                cout << "B\n";
                break;
            
            case 3:
                cout << "C\n";
                break;
            
            case 4:
                cout << "D\n";
                break;
        }
    }
    
    return 0;
}
