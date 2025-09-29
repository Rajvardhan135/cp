#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for(int i=0; i<n; i++) cin >> x[i];
    for(int i=0; i<n; i++) cin >> y[i];

    vector<pair<int, int>> v(n);
	for(int i=0; i<n; i++) {
		v[i] = {x[i], y[i]};
	}

	sort(v.begin(), v.end(), [](auto &a, auto &b) {
		int diff1 = a.second - a.first;
		int diff2 = b.second - b.first;
		return diff1 < diff2;
	});

	int r = n-1, l = 0, days = 0;

	while(l < r) {
		auto [x1, y1] = v[l];
		auto [x2, y2] = v[r];

		// cout << x1 << " " << x2 << " " << y1 << " " << y2 << ln;

		// if(y2-x2 <= 0) break;

		if(x1+x2 <= y1+y2) {
			days++;
			r--;
			l++;
		} else {
			l++;
		}
	}

	cout << days << ln;
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