#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	vector<ll> nums(n), pre1(n, 0), pre2(n, 0);
	for(int i=0; i<n; i++) cin >> nums[i];
	sort(nums.begin(), nums.end());
	
	pre1[0] = nums[0], pre2[n-1] = nums[n-1];
	for(int i=1; i<n; i++) {
		pre1[i] = nums[i] + pre1[i-1];
	}
	for(int i=n-2; i>=0; i--) {
		pre2[i] = nums[i] + pre2[i+1];
	}

	ll total = accumulate(nums.begin(), nums.end(), 0ll);

	ll ans = total - pre2[n-k];

	for(int i=1; i<n; i+=2) {
		ll count = (i+1) / 2;
		if(count > k) break;
		ll sum = pre1[i];
		if(k - count != 0) sum += pre2[n-(k-count)];
		ans = max(ans, total - sum);
	}

	cout << ans << ln;

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