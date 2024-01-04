#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    srand((unsigned)time(NULL));

    i = rand()%1;

    printf("%d",i);

    return 0;
}
