#include <stdio.h>

void getMean(int n, float input[], float *mean_val)
{
    for (int i = 0; i < n; i++)
    {
        *mean_val += input[i];
    }
    *mean_val /= n;
}

void getExpected(float n, float input[], float *expected_val)
{
    for (int i = 0; i < n; i++)
    {
        *expected_val += input[i] * (1 / n);
    }
}

int main()
{
    float n;
    float input[100];
    float mean_val = 0, expected_val = 0;
    float result;

    scanf("%f", &n);

    if (n == 0)
    {
        printf("divide by zero");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%f", &input[i]);
        }

        getMean(n, input, &mean_val);
        getExpected(n, input, &expected_val);

        result = mean_val / expected_val;

        printf("%.2f", result);
    }

    return 0;
}
