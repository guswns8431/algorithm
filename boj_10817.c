#include <stdio.h>

void sort(int *arr)
{
    int tmp;
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
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

    printf("%d",input[1]);

    return 0;
}
