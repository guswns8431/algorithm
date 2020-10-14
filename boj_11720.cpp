#include <iostream>
using namespace std;

int main()
{
    int n;
    char input[100];
    int result = 0;

    cin >> n;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> input[i];
    }

    for(int i = 0 ; i < n ; i++)
    {
        result += input[i] - 48;
    }

    cout << result;

    return 0;
}
