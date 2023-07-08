#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		std::string str; cin >> str;
		if (str.size() <= 10) {
			cout << str << '\n';
		} else {
			cout << str[0] << str.size()-2 << str[str.size() - 1] << '\n';
		}
	}
}
