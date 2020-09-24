#include <stdio.h>

int main()
{
    float a, b;
    float tmp;
    float score1,score2;

    scanf("%f %f", &a, &b);

    if(a == 0 && b == 0)
    {
        printf("0 0\n");
        return 0;
    }
    if(a <= b)
    {
        printf("-1\n");
        return 0;
    }

    score1 = (a + b) / 2;
    score2 = (a - b) / 2;

    if (score1 < score2)
    {
        tmp = score1;
        score1 = score2;
        score2 = tmp;
    }
    if (score1 > (int)score1 || score2 > (int)score2 || score1 == 0 || score2 == 0)
    {
        printf("-1");
        return 0;
    }

    printf("%d %d\n", (int)score1, (int)score2);

    return 0;
}
