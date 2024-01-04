#include <stdio.h>

int main()
{
    int a, b, c;
    int count = 0;

    scanf("%d %d %d", &a, &b, &c);

    if (b - a > c - b)
    {
        while (1)
        {
            b--;
            if (a != b)
            {
                count++;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        while (1)
        {
            b++;
            if(b != c)
            {
                count++;
            }
            else
            {
                break;
            }
        }
    }

    printf("%d", count);

    return 0;
}
