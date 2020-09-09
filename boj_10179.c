#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    double price;

    scanf("%d",&t);

    for(int i = 0 ; i < t ; i++)
    {
        scanf("%lf",&price);
        printf("$%.2lf\n",round(price*0.8*100)/100);
    }

    return 0;
}
