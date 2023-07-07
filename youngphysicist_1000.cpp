#include <iostream>

using namespace std;

int main(void) {
	int n; cin >> n;
	int a, b, c;

	for (int i = 0; i < n; i++) {
		int x, y, z; cin >> x >> y >> z;
		a += x; b += y, c += z;
	}

	if (a == 0 && b == 0 && c == 0) cout << "YES";
	else cout << "NO";

}
