#include <iostream>

int main()
{
    int n;
    int max_star;
    int begin_star, end_star;

    std::cin >> n;

    max_star = 2 * n - 1;

    for (int i = n - 1; i >= 0; i--)
    {
        begin_star = i;
        end_star = max_star - i;
        for (int j = 0; j < end_star; j++)
        {
            if (i == 0)
            {
                std::cout << "*";
            }
            else
            {
                if (j == begin_star || j == end_star-1)
                {
                    std::cout << "*";
                }
                else
                {
                    std::cout << " ";
                }
            }
        }
        std::cout << "\n";
    }

    return 0;
}
