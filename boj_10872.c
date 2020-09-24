#include <stdio.h>

int fact(int n)
{
    int result = 1;

    for(int i = 1 ; i <= n ; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int a;

    scanf("%d",&a);

    printf("%d",fact(a));

    return 0;
}
