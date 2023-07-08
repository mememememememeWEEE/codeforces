#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, int> db;

int main(void) {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string str; cin >> str;
		if (db.find(str) == db.end()) {
			db[str] = 1;
			cout << "OK\n";
		} else {
			cout << str << db.at(str) << '\n';
			++db[str];
		}
	}
}
