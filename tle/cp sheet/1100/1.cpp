#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cmath>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define ln '\n'
#define ll long long

void solve() {
	unordered_set<char> st;
	int n;
	string s;
	cin >> n;
	cin >> s;
	vector<int> freq(n, 0);

	for(int i=0; i<n; i++) {
		char c = s[i];
		st.insert(c);
		freq[i] = st.size();
	}

	int count = 1;
	for(int i=n-1; i>0; i--) {
		count += freq[i];
	}
	cout << count << ln;
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