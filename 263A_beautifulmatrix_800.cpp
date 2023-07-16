#include <cstdlib>
#include <iostream>

int main(void) {
	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <= 5; ++j) {
			int x; std::cin >> x;
			if (1 == x) {
				std::cout << abs(3 - i) + abs(3 - j);
				return 0;
			}
		}
	}
}
