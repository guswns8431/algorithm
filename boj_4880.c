#include <stdio.h>

int main()
{
    int a1, a2, a3;
    int d;
    int r;

    while (1)
    {
        scanf("%d %d %d", &a1, &a2, &a3);
        if (a1 == 0 && a2 == 0 && a3 == 0)
        {
            break;
        }

        if (a1 - a2 == a2 - a3)
        {
            d = a2 - a1;
            printf("AP %d", a3 + d);
        }
        else
        {
            r = a2 / a1;
            printf("GP %d", a3 * r);
        }
    }

    return 0;
}
