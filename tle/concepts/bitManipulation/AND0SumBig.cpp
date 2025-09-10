#include <iostream>
using namespace std;

void And0SumBig() {
	long long n, k;
	long long mod = 1e9 + 7;
	cin >> n >> k;

	long long ans = 1;

	for(int i=0; i<k; i++) {
		ans *= n;
		ans %= mod;
	}

	cout << ans << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		And0SumBig();
	}
}
