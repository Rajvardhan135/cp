#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v(n+1, 0);
	for(int i=1; i<=n; i++) cin >> v[i];

	vector<int> pre1(n+1, 0);
	vector<int> pre2(n+1, 0);

	for(int i=1; i<=n; i++) {
		pre1[i] = v[i] + pre1[i-1];
		pre2[i] = (v[i] * i) + pre2[i-1];
		// cout << pre1[i] << " " << pre2[i] << endl;
	}

	int q; cin >> q;
	while(q--) {
		int l, r;
		cin >> l >> r;
		cout << pre2[r] - pre2[l-1] - (l-1) * (pre1[r] - pre1[l-1]) << endl;
	}

}