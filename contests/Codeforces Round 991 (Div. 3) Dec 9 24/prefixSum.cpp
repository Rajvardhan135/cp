#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v(n);
	for(auto &it : v) cin >> it;
	vector<int> pre(n);
	for(int i=0; i<n; i++) {
		pre[i] = v[i] + (i == 0 ? 0 : pre[i-1]);
	}

	int q; cin >> q;
	while(q--) {
		int l, r;
		cin >> l >> r;
		cout << pre[r] - (l == 0 ? 0 : pre[l-1]) << endl;
	}

	return 0;
}