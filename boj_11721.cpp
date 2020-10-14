#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char input[100];
    int inputLen;
    int count = 0;

    cin >> input;

    inputLen = strlen(input);

    for (int i = 0; i < inputLen; i++)
    {
        cout << input[i];
        count++;
        if(count % 10 == 0)
        {
            cout << "\n";
        }
    }

    return 0;
}
