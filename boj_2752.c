#include <stdio.h>

void sort(int input[])
{
    int tmp;
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (input[i] > input[j])
            {
                tmp = input[i];
                input[i] = input[j];
                input[j] = tmp;
            }
        }
    }
}

int main()
{
    int input[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &input[i]);
    }
    sort(input);

    for(int i = 0 ; i < 3 ; i++)
    {
        printf("%d ",input[i]);
    }

    return 0;
}
