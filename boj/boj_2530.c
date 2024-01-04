#include <stdio.h>

int main()
{
    int h, m, s;
    int time;

    scanf("%d %d %d", &h, &m, &s);
    scanf("%d", &time);

    m = m + ((s + time) / 60);
    s = (s + time) % 60;
    h = h + (m / 60);
    m = m % 60;
    if (h >= 24)
    {
        h = h % 24;
    }

    printf("%d %d %d", h, m, s);

    return 0;
}
