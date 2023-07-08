#include <cstdlib>
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

array<int, 101> boys, girls;
int n, m, ans = 0;

int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> boys[i];
	cin >> m;
	for (int i = 0; i < m; i++) cin >> girls[i];

	sort(boys.begin(), boys.begin() + n);
	sort(girls.begin(), girls.begin() + m);

	int i = 0, p = 0; 
	while (i < n && p < m) {
		if (boys[i] - girls[p] < -1) {
			++i; 
			continue;
		} else if (boys[i] - girls[p] > 1) {
			++p; 
			continue;
		} else {
			++i; ++p; ++ans;
		}
	}

	cout << ans; 
}
