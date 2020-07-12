#include <stdio.h>

int main()
{
    int input;
    int carNum[5];
    int count = 0;

    scanf("%d",&input);

    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&carNum[i]);
    }

    input %= 10;

    for(int i = 0; i < 5 ; i++)
    {
        if(carNum[i] == input)
        {
            count++;
        }
    }

    printf("%d",count);

    return 0;
}
