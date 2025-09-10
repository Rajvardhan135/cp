#include <iostream>
using namespace std;

void coins() {
	long long n, k;
	cin >> n >> k;

	if(n % 2 == 0 || k % 2 == 1) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		coins();
	}
}