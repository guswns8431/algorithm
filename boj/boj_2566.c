#include <stdio.h>

int main()
{
    int input[10][10]; //index 편하게 하려고 일부러 10*10으로 입력받음
    int maxIndex[2]; //i와 j 저장
    int max = 0;

    for(int i = 1 ; i < 10 ; i++)
    {
        for(int j = 1 ; j < 10 ; j++)
        {
            scanf("%d",&input[i][j]);
        }
    }

    for(int i = 1 ; i < 10 ; i++)
    {
        for(int j = 1 ; j < 10; j++)
        {
            if(max < input[i][j])
            {
                max = input[i][j];
                maxIndex[0] = i;
                maxIndex[1] = j;
            }
        }
    }    

    printf("%d\n%d %d",max,maxIndex[0],maxIndex[1]);

    return 0;
}
