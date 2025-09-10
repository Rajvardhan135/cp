#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;

	if(n & 1) {
		if(a % 2 == 1) {
			if(b % 2 == 1) cout << "YES" << ln;
			else cout << "NO" << ln;
		} else {
			if(b % 2 == 1 && b > a) cout << "YES" << ln;
			else cout << "NO" << ln;
		}
	} else {
		if(a % 2 == 0) {
			if(b % 2 == 0) cout << "YES" << ln;
			else cout << "NO" << ln;
		} else {
			if(b % 2 == 0 && b > a) cout << "YES" << ln;
			else cout << "NO" << ln;
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