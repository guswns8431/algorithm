#include <iostream>
using namespace std;

void printWeek(int result)
{
    switch (result)
    {
    case 0:
        cout << "SUN";
        break;
    case 1:
        cout << "MON";
        break;
    case 2:
        cout << "TUE";
        break;
    case 3:
        cout << "WED";
        break;
    case 4:
        cout << "THU";
        break;
    case 5:
        cout << "FRI";
        break;
    case 6:
        cout << "SAT";
        break;
    default:
        break;
    }
}

int main()
{
    int x, y;
    int count = 0;
    int result;

    cin >> x >> y;

    for (int i = 1; i <= 12; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            for (int j = 1; j <= 31; j++)
            {
                count++;
                if (i == x && j == y)
                {
                    result = count % 7;
                    printWeek(result);
                    return 0;
                }
            }
        }
        else if (i == 2)
        {
            for (int j = 1; j <= 28; j++)
            {
                count++;
                if (i == x && j == y)
                {
                    result = count % 7;
                    printWeek(result);
                    return 0;
                }
            }
        }
        else
        {
            for (int j = 1; j <= 30; j++)
            {
                count++;
                if (i == x && j == y)
                {
                    result = count % 7;
                    printWeek(result);
                    return 0;
                }
            }
        }
    }
}
