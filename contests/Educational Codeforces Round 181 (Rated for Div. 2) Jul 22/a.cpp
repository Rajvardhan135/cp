#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cmath>
using namespace std;

#define ll '\n'

void solve() {
	string s;
	cin >> s;
	int n = s.size();
	string f = "", t = "";
	for(int i=0; i<n; i++) {
		if(s[i] == 'F') f = f + 'F';
		else if(s[i] == 'T') t = t + 'T';
	}

	string ans = "";

	for(int i=0; i<n; i++) {
		if(s[i] != 'F' && s[i] != 'T') ans += s[i];
	}

	ans = t + ans + f;

	cout << ans << ll;
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