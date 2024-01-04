#include <stdio.h>

int main()
{
    int s, k, h;
    int min = 0;

    scanf("%d %d %d", &s, &k, &h);

    if (s + k + h >= 100)
    {
        printf("OK");
    }
    else
    {
        min = s;
        if (min > k)
        {
            min = k;
        }
        if (min > h)
        {
            min = h;
        }

        if (min == s)
        {
            printf("Soongsil");
        }
        else if (min == k)
        {
            printf("Korea");
        }
        else
        {
            printf("Hanyang");
        }
    }

    return 0;
}
