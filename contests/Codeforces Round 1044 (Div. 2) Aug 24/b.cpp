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
	ll total = 0;
	for(int i=n-1; i>=0; i-=2) {
		total += nums[i];
	}
	
	cout << total << ln;
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