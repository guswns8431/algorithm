#include <stdio.h>

void calX(int a, int p, int *ptotalX)
{
    *ptotalX = a * p;
}

void calY(int b, int c, int d, int p, int *ptotalY)
{
    if (p <= c)
    {
        *ptotalY = b;
    }
    else
    {
        *ptotalY = b + ((p - c) * d);
    }
}

int main()
{
    int a, b, c, d, p;
    int totalX, totalY;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);

    calX(a, p, &totalX);
    calY(b, c, d, p, &totalY);

    if (totalX > totalY)
    {
        printf("%d", totalY);
    }
    else
    {
        printf("%d", totalX);
    }

    return 0;
}
