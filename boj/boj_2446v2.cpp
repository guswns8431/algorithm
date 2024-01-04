#include <iostream>

int main()
{
    int n;
    int max_star;
    int begin_star, end_star;

    std::cin >> n;

    max_star = 2 * n - 1;

    for (int i = 0; i < n; i++)
    {
        begin_star = i;
        end_star = max_star - i;
        for (int j = 0; j < max_star - i; j++)
        {
            if (j >= begin_star && j < end_star)
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
    for (int i = 1; i < n; i++)
    {
        begin_star = n - i;
        end_star = max_star - begin_star + 1;
        for (int j = 1; j <= end_star; j++)
        {
            if (j >= begin_star && j <= end_star)
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

    return 0;
}
