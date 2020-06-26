#include <stdio.h>

int main()
{
    int n, m, k;
    int tmp;

    scanf("%d %d %d", &n, &m, &k);

    if (n >= m)
    {
        tmp = n / 2;
        while (1)
        {
            if ((n - (tmp * 2) + m - tmp >= k) && (m >= tmp))
            {
                break;
            }
            else
            {
                tmp--;
            }
        }
    }
    else
    {
        tmp = m;
        while (1)
        {
            if ((n - (tmp * 2) + m - tmp >= k) && (n >= tmp * 2))
            {
                break;
            }
            else
            {
                tmp--;
            }
        }
    }

    printf("%d", tmp);

    return 0;
}
