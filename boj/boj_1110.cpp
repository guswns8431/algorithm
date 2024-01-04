#include <iostream>
using namespace std;

int main()
{
    int input, a, b, c, oldInput;
    int count = 0;

    cin >> input;
    oldInput = input;

    while (1)
    {
        a = input / 10;
        b = input % 10;
        c = a + b;
        c %= 10;
        input = b * 10 + c;
        count++;
        if (oldInput == input)
        {
            break;
        }
    }

    cout << count;

    return 0;
}
