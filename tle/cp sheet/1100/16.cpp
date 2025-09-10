#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n;
	cin >> n;
	vector<ll> nums(n);

	for(int i=0; i<n; i++) cin >> nums[i];

	sort(nums.begin(), nums.end());

	if(nums[0] != 1) {
		cout << "NO" << ln;
		return;
	}

	ll sum = 1;
	for(int i=1; i<n; i++) {
		if(sum < nums[i]) {
			cout << "NO" << ln;
			return;
		}
		sum += nums[i];
	}

	cout << "YES" << ln;
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