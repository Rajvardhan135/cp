#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n;
	vector<ll> nums(n+1);
	for(int i=1; i<=n; i++) cin >> nums[i];

	ll odd = nums[1], even = nums[2];
	ll total = 0;

	if(odd > even) {
		total += (odd - even);
		nums[1] = even;
	}

	for(int i=3; i<n; i++) {
		if(i & 1) odd += nums[i];
		else even += nums[i];

		if(odd > even) {
			
		}
	}

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