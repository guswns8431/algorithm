#include <iostream>

int main()
{
    int n;
    int star_num;
    int begin_star;
    int current_star = 0;
    bool flag = false;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        star_num = i + 1;
        begin_star = n - i;
        for (int j = 1; current_star <= star_num ; j++)
        {
            if (j >= begin_star && flag == false)
            {
                std::cout << "*";
                flag = !flag;
                current_star++;
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
        current_star = 0;
        flag = false;
    }

    return 0;
}
