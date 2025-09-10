#include <iostream>
using namespace std;

void grasshopperOnALine() {
	int x, k;
	cin >> x >> k;

	if(x % k != 0) {
		cout << 1 << endl << x << endl;
		return;
	}

	cout << 2 << endl;
	int l = 1, r = x-1;

	while(l <= r) {
		if(l%k != 0 && r%k != 0) {
			cout << l << " " << r << endl;
			return;
		}
		l++;
		r--;
	}

}

int main() {
	int tc;
	cin >> tc;

	while(tc--) {
		grasshopperOnALine();
	}
}