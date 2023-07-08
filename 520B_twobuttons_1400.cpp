#include <iostream>

using namespace std;

int main(void) {
	int curr, target, ans = 0;
	cin >> curr >> target;

	while (curr != target) {
		ans++;
		if (target < curr || target % 2 == 1) target++;
		else target /= 2;
	}

	cout << ans;
}
