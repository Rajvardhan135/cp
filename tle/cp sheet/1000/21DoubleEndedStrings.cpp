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
	string a, b;
	cin >> a >> b;
	int n = a.size(), m = b.size();

    for(int len=min(n, m); len>0; len--) {
        for(int i=0; i<=n-len; i++) {
            string as = a.substr(i, len);
            // cout << as << ln;
            for(int j=0; j<=m-len; j++) {
                string bs = b.substr(j, len);
                // cout << as << " " << bs << ln;
                if(as == bs) {
                    cout << (m + n - (2 * len)) << ln;
                    return;
                }
            }
        }
    } 

    cout << (m + n) << ln;
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