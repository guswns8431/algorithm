#include <stdio.h>

int main()
{
    int n;
    int plug;
    int totalPlug = 0;

    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&plug);
        totalPlug += plug;

    }

    printf("%d",totalPlug - n + 1);

    return 0;
}
