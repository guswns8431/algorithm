#include <stdio.h>

int main()
{
    int n;
    int answer = 1;
    int tmp;

    scanf("%d", &n);

    if (n <= 5)
    {
        printf("%d", n);
    }
    else
    {
        for (int i = 0; i <= 1000000000; i++)
        {
            tmp = 9 + 8 * i;
            if (n <= tmp)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (tmp == n)
                    {
                        printf("%d", answer);
                        return 0;
                    }
                    else
                    {
                        tmp--;
                        if (j <= 3)
                        {
                            answer++;
                        }
                        else
                        {
                            answer--;
                        }
                    }
                }
            }
        }
    }
}
