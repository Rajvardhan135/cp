#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for(auto &it:nums) cin >> it;

    auto helper = [&](ll h) -> bool{
    	ll temp = x;
    	for(int i=0; i<n; i++) {
    		if(nums[i] < h) {
    			temp -= (h-nums[i]);
    			if(temp < 0) return false;
    		}
    	}
    	return true;
    };

    ll l = 1, r = 1e18, ans = 1;
    while(l <= r) {
    	ll m = (l + r) / 2;
    	if(helper(m)) {
    		ans = m;
    		l = m + 1;
    	} else {
    		r = m - 1;
    	}
    }

    cout << ans << ln;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}