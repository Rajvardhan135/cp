#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n, k;
	string s, t, p;
	cin >> n >> s >> k >> t >> p;
	for(int i=0; i<k; i++) {
		if(p[i] == 'D') {
			s = s + t[i];
		} else {
			s = t[i] + s;
		}
	} 
	cout << s << ln;
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