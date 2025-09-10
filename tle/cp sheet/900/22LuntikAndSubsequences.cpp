#include <iostream>
#include <cmath>
using namespace std;

void LuntikAndSUbsequence() {
	long long n, ones=0, zeros=1;
	cin >> n;

	for(long long i=0; i<n; i++) {
		long long num;
		cin >> num;
		if(num == 1) ones++;
		else if(num == 0) zeros *= 2;
	}

	if(ones == 0) cout << 0 << endl;
	else {
		cout << (ones * zeros) << endl;
	}

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		LuntikAndSUbsequence();
	}
}