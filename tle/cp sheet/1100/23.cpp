#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n, l, r;
	cin >> n >> l >> r;
	vector<int> ans;

	for(int i=1; i<=n; i++) {
		int num = l;
		if(num % i != 0) num += (i - (num % i));
		if(num > r) {
			cout << "NO" << ln;
			return;
		}
		ans.push_back(num);
	}

	cout << "YES" << ln;
	for(int i=0; i<n; i++) cout << ans[i] << " ";
	cout << ln;
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