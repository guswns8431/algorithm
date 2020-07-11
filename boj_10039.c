#include <stdio.h>

int main()
{
    int input;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &input);
        if (input < 40)
        {
            sum += 40;
        }
        else
        {
            sum += input;
        }
    }

    printf("%d", sum / 5);

    return 0;
}
