#include <iostream>
#include <algorithm>
#include <vector>

typedef long long ll;
using namespace std;

int main(void) {
	ll n, d; cin >> n >> d;
	vector<ll> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	sort(v.begin(), v.end());
	long double answer = max((v[0]-0), d-v[v.size()-1]);

	for (int i = 1; i < n; ++i) {
		answer = max(answer, (v[i] - v[i - 1])/2.0L);
	}

	cout.precision(20); //fucking bullshit percision gay monkey
	cout << answer;
}
