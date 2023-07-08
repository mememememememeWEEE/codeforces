#include <iostream>

using namespace std;

int main(void) {
	int n, m, a, b;
	cin >> n >> m >> a >> b;

	float mavg = (float)b / m;
	if (mavg >= a) {
		cout << a*n; 
		return 0;
	}

	//mavg < a
	int rem = n % m;
	
	if (rem == 0) {
		cout << b * (n / m);
	} else {
		cout << min(b * ((n / m) + 1), b * (n / m) + a * rem);
	}
}
