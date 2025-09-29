#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<bool> a(n+1);
    for(int i=1; i<=n; i++) a[i] = (s[i-1] == '1');

    vector<int> cost(n+1, 0);
		
	for(int i=n; i>=1; i--) {
		for(int j=i; j<=n; j+=i) {
			if(a[j]) break;
			cost[j] = i;
		}
	}

	// for(int i=1; i<=n; i++) cout << cost[i] << " ";
	// cout << ln;

	ll ans = 0;
	for(int i=1; i<=n; i++) ans += cost[i];
	cout << ans << ln;
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