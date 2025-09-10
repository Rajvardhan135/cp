#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	string s;
	cin >> s;
	int n = s.size();

	unordered_map<char, int> chars;
	for(int i=0; i<n; i++) chars[s[i]] = 1;

	for(auto &[key, pair] : chars) {
		int c = key;
		int l = 0, r = 0;
		unordered_set<char> st;
		while(l < n) {
			if(s[l] != c) l++;
			else {
				r = l + 1;
				while(r < n && s[r] != c) {
					st.insert(s[r]);
					r++;
				}
				if(r < n) {
					if(st.size() < chars.size()-1) {
						cout << "NO" << ln;
						return;
					} else {
						st.clear();
						l = r;
					}
				} else {
					l = r;
				}
			}
		}
	}
	cout << "YES" << ln;
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