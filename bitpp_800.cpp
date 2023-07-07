#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int x = 0;

int main(void) {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		std::string s; cin >> s;
		if (s == "++X") ++x; 
		else if (s == "X++") ++x; 
		else if (s == "--X") --x; 
		else if (s == "X--") --x; 
	}
	cout << x;
}
