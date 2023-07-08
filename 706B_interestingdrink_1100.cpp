#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main(void) {
	int n, q; cin >> n;
	vector<int> shops(n);
	for (int i = 0; i < n; i++) cin >> shops[i];

	cin >> q;
	
	sort(shops.begin(), shops.end());

	for (int i = 0; i < q; ++i) {
		long money; cin >> money;
		cout << distance(shops.begin(), upper_bound(shops.begin(), shops.end(), money)) << '\n';
	}
}
