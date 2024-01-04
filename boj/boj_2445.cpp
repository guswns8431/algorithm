#include <iostream>
using namespace std;

int main()
{
    int n;
    int length;
    int beginStar, endStar;

    cin >> n;

    length = n * 2;

    for (int i = 1; i <= n; i++)
    {
        beginStar = i + 1;
        endStar = length - i;
        for (int j = 1; j <= length; j++)
        {
            if (j >= beginStar && j <= endStar)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }

    for (int i = 1; i < n; i++)
    {
        endStar = n - i;
        beginStar = length - endStar + 1;
        for (int j = 1; j <= length; j++)
        {
            if (j > endStar && j < beginStar)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}
