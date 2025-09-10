#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

ll expo(ll a, ll b) {
	ll res = 1;
	while(b != 0) {
		if(b & 1) res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}

void solve() {
	ll n;
	cin >> n;
	vector<ll> ans;

	for(ll i=1; i<18; i++) {
		ll num = 1ll + expo(10, i);
		// cout << num << ln;
		if(n % num == 0) {
			ans.push_back(n / num);
		}
	}

	cout << ans.size() << ln;

	if(ans.size() == 0) {
		return;
	}

	reverse(ans.begin(), ans.end());

	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}
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