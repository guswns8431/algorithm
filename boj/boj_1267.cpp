#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int young(int input[],int n)
{
    int total = 0;
    for(int i = 0 ; i < n ; i++)
    {
        while(1)
        {
            input[i] -= 30;
            if(input[i] < 0)
            {
                total += 10;
                break;
            }
            else
            {
                total += 10;
            }
        }
    }

    return total;
}

int min(int input[],int n)
{
    int total = 0;
    for(int i = 0 ; i < n ; i++)
    {
        while (1)
        {
            input[i] -= 60;
            if(input[i] < 0)
            {
                total += 15;
                break;
            }
            else
            {
                total += 15;
            }   
        }   
    }
    return total;
}

void compareYoungMin(int totalY,int totalM)
{
    if(totalY < totalM)
    {
        printf("Y %d",totalY);
    }
    else if(totalY > totalM)
    {
        printf("M %d",totalM);
    }
    else
    {
        printf("Y M %d",totalY);
    }
}

int main()
{
    int n;
    int input[20];
    int input2[20];

    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&input[i]);
        input2[i] = input[i];
    }

    compareYoungMin(young(input,n),min(input2,n));

    return 0;
}
