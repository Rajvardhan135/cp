#include <iostream>
using namespace std;

void And0SumBig() {
	int n, k;
	long long mod = 10e9 + 7;
	cin >> n >> k;
	k--;

	int ans = 1;

	for(int i=0; i<k; i++) {
		ans = (ans * n) % mod;
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
