#include <iostream>

using namespace std;

int main(void) {
	std::string players; cin >> players;
	int count = 1;

	for (int i = 1; i < players.size(); ++i) {
		if (players[i] == players[i-1]) ++count;
		else count = 1;

		if (count >= 7) goto success;
	}

	cout << "NO";
	return 0;

success:
	cout << "YES";
}
