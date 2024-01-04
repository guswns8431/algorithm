#include <stdio.h>
#include <string.h>

int main()
{
    char b1[30], b2[30];
    int b1Len, b2Len;
    int b1Dec, b2Dec;
    int digitIndex = 1;
    int mulB1B2;

    scanf("%s", b1);
    scanf("%s", b2);

    b1Len = strlen(b1);
    b2Len = strlen(b2);

    for (int i = b1Len - 1; i >= 0; i--)
    {
        switch (b1[i])
        {
        case '0':
            digitIndex *= 2;
            break;
        default:
            b1Dec += digitIndex;
            digitIndex *= 2;
            break;
        }
    }

    digitIndex = 1;

    for (int i = b2Len - 1; i >= 0; i--)
    {
        switch (b2[i])
        {
        case '0':
            digitIndex *= 2;
            break;

        default:
            b2Dec += digitIndex;
            digitIndex *= 2;
            break;
        }
    }

    mulB1B2 = b1Dec * b2Dec;

    while (1)
    {
        /* code */
    }
    

    return 0;
}
