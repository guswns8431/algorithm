#include <stdio.h>

int main()
{
    int n, w, h, l;
    int result;

    scanf("%d %d %d %d", &n, &w, &h, &l);

    w = w / l * l;
    h = h / l * l;

    result = w * h / l / l;

    if (result <= n)
    {
        printf("%d", result);
    }
    else
    {
        printf("%d", n);
    }

    return 0;
}
