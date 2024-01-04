#include <stdio.h>

int main()
{
    int t,n;
    int result = 0;
    int input;

    scanf("%d", &t);

    for(int i = 0 ; i < t ; i++)
    {
        scanf("%d",&n);
        for(int j = 0 ; j < n ; j++)
        {
            scanf("%d", &input);
            result += input;
        }
        printf("%d\n",result);
        result = 0;
    }

    return 0;
}
