#include <iostream>

int main()
{
    int n;
    int count = 0;

    std::cin >> n;

    while (1)
    {
        if(n == 1)
        {
            break;
        }

        if(n % 3 == 0)
        {
            n /= 3;
            count++;
        }
        else if(n % 3 != 0)
        {
            n--;
            count++;
        }
        else
        {
            n /= 2;
            count++;
        }

    }
    
    std::cout << count;

    return 0;
}
