#include <iostream>

using namespace std;

bool solve(int num) {
	if (num < 11) return false;
	if (num % 10 == ((num % 100) - (num % 10))/10) return true;
	else return false;
}

int main(void) {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		if (solve(num)) cout << "YES\n";
		else cout << "NO\n";
	}
}
