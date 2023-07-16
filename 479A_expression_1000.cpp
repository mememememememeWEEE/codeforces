#include <iostream>
#include <cstdlib>

int main(void) {
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << std::max(
			std::max(a+b+c, 
				std::max(a+(b*c), (a+b)*c)),
			std::max((a*b)+c, 
				std::max(a*b*c, a*(b+c))));
}
