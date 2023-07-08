#include <ctype.h>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void) {
	string str, out = ""; cin >> str;

	for (int i = 0; i < str.size(); i++) {
		const char ch = tolower(str[i]);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
			continue;
		} else {
			out += '.'; out += ch;
		}
	}

	cout << out; 
}
