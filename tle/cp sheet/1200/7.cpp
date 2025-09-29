#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    ll n, m;
    cin >> n >> m;

   	vector<vector<ll>> cards(m, vector<ll>(n, 0));

   	for(int i=0; i<n; i++) {
   		for(int j=0; j<m; j++) cin >> cards[j][i];
   	}

   	vector<ll> totals(n, 0);

   	for(auto &v:cards) {
   		sort(v.begin(), v.end());
   		for(int i=0; i<n; i++) {
   			totals[i] += v[i];
   		}
   	}

   	sort(totals.rbegin(), totals.rend());

   	ll ans = 0;
   	ll pos = n-1, neg = 0;
   	for(int i=0; i<n; i++) {
   		ans += (totals[i] * pos);
   		ans -= (totals[i] * neg);
   		pos--;
   		neg++;
   	}

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