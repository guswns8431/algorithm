#include <iostream>

int main(void)
{
	int a,b,v;

	std::cin >> a >> b >> v;
	if ((v - a) % (a - b))
		std::cout << (v-a)/(a-b) + 2;
	else
		std::cout << (v-a)/(a-b) + 1;
	return (0);
}
