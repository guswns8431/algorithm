#include <stdio.h>

int main()
{
    int a, b, c;
    int t;

    scanf("%d", &t);

    if (t % 10 != 0)
    {
        printf("-1");
        return 0;
    }

    a = t / 300;
    t -= a * 300;
    b = t / 60;
    t -= b * 60;
    c = t / 10;

    printf("%d %d %d", a, b, c);

    return 0;
}
