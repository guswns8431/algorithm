#include <stdio.h>
#include <string.h>

int main()
{
    char input[333334];
    int len;

    scanf("%s", input);

    len = strlen(input);

    for (int i = 0; i < len; i++)
    {
        if (i == 0)
        {
            switch (input[i])
            {
            case '0':
                printf("0");
                break;
            case '1':
                printf("1");
                break;
            case '2':
                printf("10");
                break;
            case '3':
                printf("11");
                break;
            case '4':
                printf("100");
                break;
            case '5':
                printf("101");
                break;
            case '6':
                printf("110");
                break;
            case '7':
                printf("111");
                break;
            default:
                break;
            }
        }
        else
        {
            switch (input[i])
            {
            case '0':
                printf("000");
                break;
            case '1':
                printf("001");
                break;
            case '2':
                printf("010");
                break;
            case '3':
                printf("011");
                break;
            case '4':
                printf("100");
                break;
            case '5':
                printf("101");
                break;
            case '6':
                printf("110");
                break;
            case '7':
                printf("111");
                break;
            default:
                break;
            }
        }
    }

    return 0;
}
