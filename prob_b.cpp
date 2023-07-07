#include <iostream>
#include <string>

using namespace std;

char solve(const string& str1, const string& str2, const string& str3) {
	if(str1[0] == str1[1] && str1[0] == str1[2] && str1[0] != '.') return str1[0];
	else if(str2[0] == str2[1] && str2[0] == str2[2] && str2[0] != '.') return str2[0];
	else if(str3[0] == str3[1] && str3[0] == str3[2] && str3[0] != '.') return str3[0];
	else if(str1[0] == str2[1] && str1[0] == str3[2] && str1[0] != '.') return str1[0];
	else if(str1[2] == str2[1] && str1[2] == str3[0] && str1[2] != '.') return str1[2];
	else if(str1[0] == str2[0] && str1[0] == str3[0] && str1[0] != '.') return str1[0];
	else if(str1[1] == str2[1] && str1[1] == str3[1] && str1[1] != '.') return str1[1];
	else if(str1[2] == str2[2] && str1[2] == str3[2] && str1[2] != '.') return str1[2];
	else return '.';
}

int main(void) {
	long t; cin >> t;
	for (long i = 0; i < t; ++i) {
		string f, s, t; cin >> f >> s >> t;
		char res = solve(f, s, t);
		if (res != '.') {
			cout << res << '\n';
		} else {
			cout << "DRAW" << '\n';
		}
	}
}
