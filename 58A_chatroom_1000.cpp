#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str; cin >> str;
	bool h = false, e = false, l1 = false, l2 = false, o = false;

	for (int i = 0; i < str.size(); ++i) {
		if (str[i] == 'h') h = true;
		else if (str[i] == 'e' && h) e = true;
		else if (str[i] == 'l' && !l1 && e && h) l1 = true;
		else if (str[i] == 'l' && l1) l2 = true;
		else if (str[i] == 'o' && l2) o = true;
	}

	if (h && e && l1 && l2 && o) {
		cout << "YES";
	} else cout << "NO";
}
