#include <stdio.h>

int main()
{
    int n;
    int d = 6;
    int lastNum = 1;
    int count = 1;

    scanf("%d", &n);

    while (1)
    {
        if (n <= lastNum)
        {
            printf("%d", count);
            break;
        }
        else
        {
            lastNum += d;
            d += 6;
            count++;
        }
    }

    return 0;
}
