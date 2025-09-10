#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	string s;
	cin >> s;
	int n = s.size(), flag = 0;
	unordered_map<char, int> mp;

	for(int i=0; i<n; i++) {
		mp[s[i]]++;
		if(mp[s[i]] > 1) {
			flag = 1;
		}
	}

	if(flag == 1 && mp.size() > 1) {
		cout << "NO" << ln;
	} else cout << "YES" << ln;
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