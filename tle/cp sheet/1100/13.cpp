#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n;
	cin >> n;
	vector<int> nums(n);

	for(int i=0; i<n; i++) cin >> nums[i];
	
	int gcd = abs(nums[0] - nums[n-1]);
	int l = 1, r = n - 2;
	while(l < r) {
		gcd = __gcd(gcd, abs(nums[l] - nums[r]));
		l++;
		r--;
	}
	cout << gcd << ln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}