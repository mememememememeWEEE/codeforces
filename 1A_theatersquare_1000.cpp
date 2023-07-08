#include <iostream>

long long n, m, a;

using namespace std;

int main(void) {
	cin >> n >> m >> a;
	cout << ((n+a-1)/a)*((m+a-1)/a);
}
