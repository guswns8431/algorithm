#include <iostream>

int main()
{
    int n;
    int begin_star, end_space;

    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        end_space = n - i;
        for (int j = 1; j <= n; j++)
        {
            if(j > end_space)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    for(int i = 1; i < n ; i++)
    {
        begin_star = i;
        for(int j = 1 ; j <= n ; j++)
        {
            if(j <= begin_star)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }

    return 0;
}
