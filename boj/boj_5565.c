#include <stdio.h>

int main()
{
    int totalPrice;
    int bookPrice;

    scanf("%d",&totalPrice);

    for(int i = 0 ; i < 9 ; i++)
    {
        scanf("%d",&bookPrice);
        totalPrice -= bookPrice;
    }

    printf("%d",totalPrice);

    return 0;
}
