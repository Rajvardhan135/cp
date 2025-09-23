#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n), b(n), c(n);

    for(int i=0; i<n; i++) {
    	int num;
    	cin >> num;
    	a[i] = {num, i};
    }
    for(int i=0; i<n; i++) {
    	int num;
    	cin >> num;
    	b[i] = {num, i};
    }
    for(int i=0; i<n; i++) {
    	int num;
    	cin >> num;
    	c[i] = {num, i};
    }

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());

    int ans = 0;
    for(int i=0; i<3; i++) {
    	int sum1 = a[i].first;
    	// cout << sum1 << ln;
    	for(int j=0; j<3; j++) {
    		if(a[i].second == b[j].second) continue;
    		int sum2 = b[j].first;
    		for(int k=0; k<3; k++) {
    			if(b[j].second == c[k].second || a[i].second == c[k].second) continue;
    			int sum3 = c[k].first;
    			// cout << a[i].second << " " << b[i].second << " " << c[k].second << ln;
    			ans = max(ans, sum1+sum2+sum3);
    		}
    	}
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