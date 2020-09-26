#include <stdio.h>

int main()
{
    int n;
    int result;
    int f1,f2;
    int tmp;

    scanf("%d",&n);

    for(int i = 0 ; i <= n ; i++)
    {
        if(i == 0)
        {
            result = 0;
            f2 = result;
        }
        else if(i == 1)
        {
            result = 1;
            f1 = result;
        }
        else
        {
            result = f1 + f2;
            tmp = f1;
            f1 = result;
            f2 = tmp;
        }
    }

    printf("%d",result);

    return 0;
}
