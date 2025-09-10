#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const ll MOD = 1e9+7;

ll mod_mul(ll a, ll b) {
	return ((a % MOD) * (b % MOD)) % MOD;
}

void solve() {
	ll n, ans;
	cin >> n;

	ans = mod_mul(4, mod_mul(n, n)) + mod_mul(3, n) - 1;
	ans = mod_mul(n, ans);
	ans = mod_mul(ans, 337ll);
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