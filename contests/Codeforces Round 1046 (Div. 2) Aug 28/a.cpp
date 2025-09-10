#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if(a > b) {
		// cout << 1 << " ";
		if(b < (ceil(a / 2.0) - 1)) {
			cout << "NO" << ln;
			return;
		}

	} else if(b > a) {
		// cout << 2 << " ";
		if(a < (ceil(b / 2.0) - 1)) {
			cout << "NO" << ln;
			return;
		}
	} 

	c -= a;
	d -= b;

	if(c > d) {
		// cout << 3 << " ";
		if(d < (ceil(c / 2.0) - 1)) {
			cout << "NO" << ln;
			return;
		}
	} else if(d > c) {
		// cout << 4 << " ";
		if(c < (ceil(d / 2.0) - 1)) {
			cout << "NO" << ln;
			return;
		}
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