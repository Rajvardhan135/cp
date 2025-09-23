#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll calcAp(ll n, ll a, ll d) {
	ll ap = (n * (2 * a + (n - 1) * d)) / 2;
	return ap;
}

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;

    int c1 = 0, c2 = 0;
    for(int i=1; i*i<=n; i++) {
    	if(i % a == 0) {
    		if(i % b == 0) c1++;
    		if((n / i) != i && (n / i) % b == 0) c1++;
    	}
    }
    for(int i=1; i*i<=n; i++) {
    	if(i % b == 0) {
    		if(i % a == 0) c2++;
    		if((n / i) != i && (n / i) % a == 0) c2++;
    	}
    }

    cout << c1 << " " << c2 << ln;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}