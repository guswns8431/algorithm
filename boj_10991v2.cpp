#include <iostream>

int main()
{
    int n;
    int begin_star, end_star;
    bool flag = false;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        begin_star = n - i;
        end_star = n + i;
        for (int j = 1; j <= end_star; j++)
        {
            if (j >= begin_star && flag == false)
            {
                std::cout << "*";
                flag = true;
            }
            else
            {
                std::cout << " ";
                flag = false;
            }
        }
        std::cout << "\n";
        flag = false;
    }

    return 0;
}
