#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n;
	cin >> n;
	vector<ll> nums(n+1, 0), pre(n+1, 0);
	for(int i=1; i<=n; i++) cin >> nums[i];

	for(int i=1; i<=n; i++) pre[i] = pre[i-1] + nums[i];

	ll gcd = 0;
	
	for(int i=n-1; i>=1; i--) {
		gcd = max(gcd, __gcd(pre[n]-pre[i], pre[i]));
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