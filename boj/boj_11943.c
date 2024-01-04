#include <stdio.h>

int main()
{
    int a, b, c, d;
    int result1, result2;

    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    result1 = a + d;
    result2 = b + c;

    if(result1 < result2)
    {
        printf("%d", result1);
    }
    else
    {
        printf("%d", result2);
    }

    return 0;
}
