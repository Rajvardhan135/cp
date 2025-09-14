#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll sum(ll n) {
	return (n * (n+1)) / 2;
}

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> nums(n);
    map<ll, ll> mp1, mp2;

    for(int i=0; i<n; i++) {
    	ll num;
    	cin >> num;
    	nums[i] = num;
    	mp1[num]++;
    }

    for(auto &[key, pair]:mp1) {
    	if(pair % k != 0) {
    		cout << 0 << ln;
    		return;
    	}
        mp1[key] = pair / k;
    }

    ll l = 0, r = 0;
    ll m = -1, ans = 0;
    ll flag = 1;

    while(r < n) {
        // cout << r << " " << l << ln;
    	ll num = nums[r];
    	if(flag == 1) mp2[num]++;

    	if(mp2[num] <= mp1[num]) r++;
    	else {
    		ll awe = sum(r-l);
            if(m != -1) awe -= sum(m-l+1);
            // cout << awe << " ";
    		ans += awe;
    		mp2[nums[l]]--;
            l++;
            m = r-1;
            if(mp2[num] <= mp1[num]){
                 r++;
                 flag = 1;
            }
            else flag = 0;
    	}
    }

    ll awe = sum(r-l);
    if(m != -1) awe -= sum(m-l+1);
    ans += awe;
    // cout << awe << ln;

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