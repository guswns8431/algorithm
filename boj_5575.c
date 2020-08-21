#include <stdio.h>

void compareSec(int s1, int s2, int *pas, int *pm1)
{
    if (s1 > s2)
    {
        s2 += 60;
        *pas = s2 - s1;
        *pm1 += 1;
    }
    else
    {
        *pas = s2 - s1;
    }
}

void compareMin(int m1, int m2, int *pam, int *ph1)
{
    if (m1 > m2)
    {
        m2 += 60;
        *pam = m2 - m1;
        *ph1 += 1;
    }
    else
    {
        *pam = m2 - m1;
    }
}

int main()
{
    int ah, am, as;
    int h1, h2, m1, m2, s1, s2;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
        compareSec(s1, s2, &as, &m1);
        compareMin(m1, m2, &am, &h1);
        printf("%d %d %d\n", h2 - h1, am, as);
    }

    return 0;
}
