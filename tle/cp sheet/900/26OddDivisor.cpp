#include <iostream>
using namespace std;

void oddDivisor() {
	long long n;
	cin >> n;

	while(n != 1) {
		if(n % 2 == 1) {
			cout << "YES" << endl;
			return;
		}

		n /= 2;
	}

	cout << "NO" << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		oddDivisor();
	}
}
