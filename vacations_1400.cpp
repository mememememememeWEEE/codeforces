#include <iostream>
#define DID_GYM 0
#define DID_CODE 1
#define DID_NONE 2

//FUCKING OPTIMIZE THIS SHIT

using namespace std;

int codes[102];
int n;


int minDays(short prevChoice, int progress, int rest) {
	int& op = codes[progress];
	if (progress == n - 1) {
		if (op == 0) return rest+1;
		if (op==1 && prevChoice==DID_CODE) return rest+1;
		if (op==2 && prevChoice==DID_GYM) return rest+1;
		else return rest;
	} else {
		if (prevChoice == DID_GYM) {
			if (op == 0) {
				return minDays(DID_NONE, progress+1, rest+1);	
			} else if (op == 1) {
				return min(
						minDays(DID_CODE, progress+1, rest),
						minDays(DID_NONE, progress+1, rest+1));
			} else if (op == 2) {
				return minDays(DID_NONE, progress+1, rest+1);	
			} else if (op == 3) {
				return min(
						minDays(DID_CODE, progress+1, rest),
						minDays(DID_NONE, progress+1, rest+1));
			}
		} else if (prevChoice == DID_CODE) {
			if (op == 0) {
				return minDays(DID_NONE, progress+1, rest+1);	
			} else if (op == 1) {
				return minDays(DID_NONE, progress+1, rest+1);	
			} else if (op == 2) {
				return min(
						minDays(DID_GYM, progress+1, rest),
						minDays(DID_NONE, progress+1, rest+1));
			} else if (op == 3) {
				return min(
						minDays(DID_GYM, progress+1, rest),
						minDays(DID_NONE, progress+1, rest+1));
			}
		} else if (prevChoice == DID_NONE) {
			if (op == 0) {
				return minDays(DID_NONE, progress+1, rest+1);	
			} else if (op == 1) {
				return min(
						minDays(DID_CODE, progress+1, rest),
						minDays(DID_NONE, progress+1, rest+1));
			} else if (op == 2) {
				return min(
						minDays(DID_GYM, progress+1, rest),
						minDays(DID_NONE, progress+1, rest+1));
			} else if (op == 3) {
				return min(
						min(minDays(DID_GYM, progress+1, rest),
						minDays(DID_NONE, progress+1, rest+1)),
						minDays(DID_CODE, progress+1, rest));
			}
		}
	}
}


int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> codes[i];

	int answer = minDays(DID_NONE, 0, 0);
	cout << answer;
}
