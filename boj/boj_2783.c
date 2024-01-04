#include <stdio.h>

int main()
{
    double min;
    double store[101][2];
    int tmp;
    double tmpMin;

    for (int i = 0; i < 2; i++)
    {
        scanf("%lf", &store[0][i]);
    }
    min = (1000 / store[0][1]) * store[0][0];
    scanf("%d", &tmp);

    for (int i = 1; i <= tmp; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%lf",&store[i][j]);
            if(j == 1)
            {
                tmpMin = (1000/store[i][1])*store[i][0];
                if(min > tmpMin)
                {
                    min = tmpMin;
                }
            }
        }
    }

    printf("%lf",min);

    return 0;
}
