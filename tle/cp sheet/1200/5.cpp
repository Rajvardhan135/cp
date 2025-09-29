#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n), prev(n, -1);
    vector<pair<int, int>> v(k, {-1, -1});

    for(auto &it:nums) cin >> it;

    for(int i=0; i<n; i++) {
    	int num = nums[i];
    	int diff = (i - prev[num-1]) - 1;
    	prev[num-1] = i;
    	if(diff > v[num-1].first) {
    		v[num-1].second = v[num-1].first;
    		v[num-1].first = diff;
    	} else if(diff > v[num-1].second) {
    		v[num-1].second = diff;
    	}
    }

    for(int i=0; i<k; i++) {
    	int num = i+1;
    	int diff = (n - prev[num-1]) - 1;
    	if(diff > v[num-1].first) {
    		v[num-1].second = v[num-1].first;
    		v[num-1].first = diff;
    	} else if(diff > v[num-1].second) {
    		v[num-1].second = diff;
    	}
    }

    sort(v.begin(), v.end());

    int ans = n;

    for(int i=0; i<k; i++) {
    	auto [x, y] = v[i];
    	if(x == -1) continue;
    	ans = min(ans, max(x/2, y));
    	// cout << x << " " << y << ln;
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