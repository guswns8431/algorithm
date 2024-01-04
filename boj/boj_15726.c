#include <stdio.h>

int main()
{
    int a,b,c;
    int val1,val2;

    scanf("%d %d %d",&a,&b,&c);

    val1 = a*b/c;
    val2 = a/b*c;

    if(val1 > val2)
    {
        printf("%d",val1);
    }
    else
    {
        printf("%d",val2);
    }
    
    return 0;
}
