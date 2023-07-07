#include <algorithm>
#include <iostream>

using namespace std;

int solve() {
	int a[51];
	int b[51];

	int n, ans = 0; cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i] >> b[i];

	for (int i = 0; i < n; ++i) 
		if (b[i] >= a[i]) ++ans;

	return (n - ans);
}

int main(void) {
	int t; cin >> t;
	for (int i = 0; i < t; ++i) {
		cout << solve() << '\n';
	}
}
