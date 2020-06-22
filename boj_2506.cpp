#include <stdio.h>

int main()
{
    int result = 0;
    int countContinue = 0;
    int n;
    int input;

    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&input);
        if(input == 1)
        {
            result ++;
            result += countContinue;
            countContinue++;
        }
        else
        {
            countContinue = 0;
        }
    }

    printf("%d",result);

    return 0;
}
