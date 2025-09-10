#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	ll a, b;
	cin >> a >> b;

	if(b % 2 == 1) {
		if((a + b) % 2 == 0) {
			cout << (a * b + 1) << ln;
		} else cout << -1 << ln;
	} else {
		ll x = a, y = b;
		if((a * (b / 2) + 2) % 2 == 0) {
			cout << (a * (b / 2) + 2) << ln;
		} else cout << -1 << ln;
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