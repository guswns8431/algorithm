#include <stdio.h>

int main()
{
    int station[10];
    int max = 0;
    int in,out;

    station[0] = 0; //편리를 위해

    for(int i = 1 ; i <= 10 ; i++)
    {
        scanf("%d %d",&out,&in);
        station[i] = station[i-1] + in - out;
        if(max < station[i])
        {
            max = station[i];
        }
    }

    printf("%d", max);

    return 0;
}
