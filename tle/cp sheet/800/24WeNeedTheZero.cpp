#include <iostream>
using namespace std;

void weNeedTheZero() {
	int n;
	cin >> n;

	int net = 0;

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		net = net ^ num;
	}

	if(n % 2 == 0) {
		if((net ^ 0) == 0) cout << 1 << endl;
		else cout << -1 << endl;
		return;
	}

	for(int i=0; i<=256; i++) {
		if((net ^ i) == 0) {
			cout << i << endl;
			return;
		}
	}

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		weNeedTheZero();
	}
}