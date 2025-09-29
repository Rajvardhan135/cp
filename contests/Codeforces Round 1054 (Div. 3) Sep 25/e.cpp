#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n, k, a, b;
    cin >> n >> k >> l >> r;

    vector<int> nums, dist(n, 0);
    for(auto &it:nums) cin >> it;

    map<int, int> mp;
	int i = 0;

    for(; i<n; i++) {
    	mp[nums[i]]++;
    	if(mp.size() == k) {
    		break;
    	}
    }

    if(i == n) {
    	cout << 0 << ln;
    	return;
    }

    dist[0] = i;
    int s = 0;

    while(i < n) {
    	mp[nums[s]]--;
    	s++;
    	if(mp[nums[s-1]] == 0) {
    		
    	}
    }

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