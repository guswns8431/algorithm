#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    int setPrice[6];
    int min;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    setPrice[0] = a + d;
    setPrice[1] = a + e;
    setPrice[2] = b + d;
    setPrice[3] = b + e;
    setPrice[4] = c + d;
    setPrice[5] = c + e;

    printf("%d", setPrice[0]);

    min = setPrice[0];

    for (int i = 1; i < 6; i++)
    {
        if (min > setPrice[i])
        {
            min = setPrice[i];
        }
    }

    printf("%d", min - 50);

    return 0;
}
