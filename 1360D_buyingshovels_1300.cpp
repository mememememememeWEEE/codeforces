#include <iostream>
#include <cmath>

using namespace std;

int solve() {
	int n, k; cin >> n >> k;
	int s = sqrt(n); 

	if (1 == k) return n;
	if (n <= k) return 1;
	if (n % 2 != s % 2) ++s;

	for (int i = s; i > 1; i -= 2) {
		if (0 == n % i) {
			return min(n / i, i);
		}
	}

	return n;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		cout << solve() << '\n';
	}
}
