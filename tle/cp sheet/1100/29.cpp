#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n;
	cin >> n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	
	ll gcd = 0;
	for(int i=0; i<n; i+=2) {
		gcd = __gcd(gcd, a[i]);
	}

	int flag = 0;
	for(int i=1; i<n; i+=2) {
		if(a[i] % gcd == 0) {
			flag = 1;
			break;
		}
	}

	if(flag == 0) {
		cout << gcd << ln;
		return;
	}

	gcd = 0;
	for(int i=1; i<n; i+=2) {
		gcd = __gcd(gcd, a[i]);
	}

	flag = 0;
	for(int i=0; i<n; i+=2) {
		if(a[i] % gcd == 0) {
			flag = 1;
			break;
		}
	}

	if(flag == 0) {
		cout << gcd << ln;
	} else cout << 0 << ln;
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