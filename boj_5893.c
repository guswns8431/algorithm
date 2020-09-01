#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char binary[100000];
    unsigned long long decimal = 0;
    int exp;
    unsigned long long digit = 0;

    scanf("%s", binary);

    if(binary[0] == '0')
    {
        printf("0");
        return 0;
    }

    exp = strlen(binary) - 1;

    for (int i = 0; i < strlen(binary); i++)
    {
        if (binary[i] == '1')
        {
            decimal += pow(2, exp);
        }
        exp--;
    }

    decimal *= 17;

    while (1)
    {
        binary[digit] = decimal % 2;
        decimal /= 2;
        digit++;
        if (decimal < 2)
        {
            binary[digit] = decimal;
            break;
        }
    }

    for (int i = digit; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
}
