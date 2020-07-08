#include <stdio.h>

int main()
{
    int input[3];
    int count = 0;
    int max = 0;

    while (1)
    {
        scanf("%d %d %d", &input[0], &input[1], &input[2]);
        
        if (input[0] == 0 && input[1] == 0 && input[2] == 0)
        {
            break;
        }

        max = 0;

        for (int i = 0; i < 3; i++)
        {
            if (max < input[i])
            {
                max = input[i];
            }
        }

        if (max >= (float)(input[0] + input[1] + input[2]) / 2)
        {
            printf("Invalid\n");
            continue;
        }

        for (int i = 0; i < 2; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (input[i] == input[j])
                {
                    count++;
                }
            }
        }
        switch (count)
        {
        case 0:
            printf("Scalene\n");
            break;

        case 1:
            printf("Isosceles\n");
            break;

        default:
            printf("Equilateral\n");
            break;
        }
        count = 0;
    }

    return 0;
}
