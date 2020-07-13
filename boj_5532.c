#include <stdio.h>

int main()
{
    int l, a, b, c, d;

    scanf("%d", &l);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if (a % c != 0)
    {
        a = a / c + 1;
    }
    else
    {
        a /= c;
    }

    if (b % d != 0)
    {
        b = b / d + 1;
    }
    else
    {
        b /= d;
    }

    if (a > b)
    {
        printf("%d", l - a);
    }
    else
    {
        printf("%d", l - b);
    }

    return 0;
}
