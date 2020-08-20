#include <stdio.h>

int isFrozen(int a)
{
    if (a < 0)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int a, b, c, d, e;
    int totalTime = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    if (isFrozen(a) == -1)
    {
        totalTime = a * (-1) * c + d + (b * e);
    }
    else
    {
        totalTime = (b - a) * e;
    }

    printf("%d",totalTime);

    return 0;
}
