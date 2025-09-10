#include <iostream>
using namespace std;

void twoPermutations() {
	int n, a, b;
	cin >> n >> a >> b;

	int l = 1;
	int r = n;

	l += (a-1);
	r -= (b-1);

	if((l == n && r == 1) || (l < r && r - l - 1 > 1)) {
		cout << "YES" << endl;
		return;
	}

	cout << "NO" << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		twoPermutations();
	}
}