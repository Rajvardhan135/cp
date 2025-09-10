#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	ll n, k;
	cin >> n >> k;
	vector<ll> nums(n);
	for(int i=0; i<n; i++) cin >> nums[i];

	for(int i=0; i<n; i++) {
		if(k % 2 == 1) {
			if(nums[i] % 2 == 0) {
				continue;
			} else {
				nums[i] += k;
			}
		} else {
			if(nums[i] % (k+1) != 0)
			nums[i] += (k * (nums[i] % (k+1)));
		}
	}

	for(int i=0; i<n; i++) cout << nums[i] << " ";
	cout << ln;
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