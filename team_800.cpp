#include <iostream>

using namespace std;

int main(void) {
	int n; cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int a, b, c; cin >> a >> b >> c;
		if (a+b+c > 1) ++ans;
	}

	cout << ans;
}
