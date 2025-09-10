#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n, flag = 0;
	cin >> n;
	map<int, int> mp;
	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		mp[num]++;
		if(mp[num] > 1) flag = 1;
	}

	if(flag == 0) cout << "NO" << ln;
	else cout << "YES" << ln;
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