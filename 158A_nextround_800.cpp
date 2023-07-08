#include <iostream>

using namespace std;

int scores[52];

int main(void) {
	int n, k; cin >> n >> k;
	int count = 0;
	for (int i = 0; i < n; i++) cin >> scores[i];
	
	for (int i = 0; i < n; i++) {
		if (scores[i] == 0) break;
		if (scores[i] >= scores[k-1]) ++count;
		else break;
	}

	cout << count;
}
