#include <iostream>

int numbers[103];

int main(void) {
	int n, even = 0, odd = 0, evenpos, oddpos; std::cin >> n;
	for (int i = 1; i <= n; ++i) std::cin >> numbers[i];

	for (int i = 1; i <= n; ++i) {
		if (numbers[i] % 2 == 0) {
			++even; evenpos = i;
		} else {
			++odd; oddpos = i;
		}
	}

	if (even > odd) std::cout << oddpos;
	else std::cout << evenpos;
}
