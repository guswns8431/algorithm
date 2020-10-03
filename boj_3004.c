#include <stdio.h>

int main()
{
    int n;
    int w,h;

    scanf("%d",&n);

    w = n / 2;
    h = n - w;

    printf("%d", (w+1)*(h+1));

    return 0;

}
