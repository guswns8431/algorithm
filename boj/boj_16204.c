#include <stdio.h>

int main()
{
    int n, m, k;
    int countO, countX, result;

    scanf("%d %d %d", &n, &m, &k);

    if (m > k)
    {
        countO = k;
    }
    else
    {
        countO = m;
    }

    if (n - m > n - k)
    {
        countX = n - k;
    }
    else
    {
        countX = n - m;
    }

    result = countO + countX;

    printf("%d", result);

    return 0;
}
