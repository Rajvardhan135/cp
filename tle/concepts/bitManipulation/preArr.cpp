#include <iostream>
#include <vector>
using namespace std;

void preArr() {
	int n, q;
	cin >> n >> q;
	vector<int> nums(n);
	for(auto &it:nums) cin >> it;
	vector<int> pre(n+1);
	pre[0] = 0;
	pre[1] = nums[0];
	for(int i=1; i<n; i++) {
		pre[i+1] = pre[i] ^ nums[i];
	}

	while(q--) {
		int l, r;
		cin >> l >> r;
		int ans = pre[r] ^ pre[l-1];
		cout << ans << endl;
	}
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		preArr();
	}
}