#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++) cin >> b[i];

	int l = 0, r = 1, maxL = 0, maxR = 0;
	int count = (a[0] != b[0]) ? 1 : 0;
	
	while(r < n) {
		if(b[r] >= b[r-1]) {
			if(b[r] != a[r]) count++;
			if(r - l > maxR - maxL && count > 0) {
				maxR = r;
				maxL = l;
			}
			r++;
		} else {
			l = r;
			r++;
			count = (a[l] != b[l]) ? 1 : 0;
		}
	}

	cout << maxL+1 << " " << maxR+1 << ln;
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