#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(auto &it:a) cin >> it;

    int l = 0, r = n - 1;
	int sm = 1, lg = n;

	while((r-l)+1 > 3) {
		if(a[l] == sm) {
			sm++;
			l++;
		} else if(a[l] == lg) {
			lg--;
			l++;
		} else if(a[r] == sm) {
			sm++;
			r--;
		} else if(a[r] == lg) {
			lg--;
			r--;
		} else {
			cout << (l+1) << " " << (r+1) << ln;
			return;
		}
	}

	cout << -1 << ln;
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