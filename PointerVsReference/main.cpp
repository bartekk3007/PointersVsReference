#include <iostream>

int main()
{
	int ap = 10;
	int bp = 20;
	int* p;

	p = &ap;
	(*p)++;
	std::cout << *p << '\n';
	p = nullptr;
	p = &bp;
	(*p)++;
	std::cout << *p << '\n';

	int ar = 10;
	int& r = ar;
	r++;
	std::cout << r << '\n';

	return 0;
}