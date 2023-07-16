#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(void) {
	string in; cin >> in;
	vector<int> nums;
	for (const auto& e : in) {
		if ('+' == e) continue;
		nums.push_back(e - '0');
	}
	
	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size() - 1; i++) {
		cout << nums[i] << "+";
	}

	cout << nums[nums.size() - 1];
}
