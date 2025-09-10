// It does not matter if i can solve this problem or not if I'm unable to solve it in less time the next time I did not learn. Don't forget I am not solving problems just to increase the number of problems I have solved, I am solving to learn.
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
	int n;
	cin >> n;
	vector<bool> v(n+2, true);
	v[0] = v[1] = false;

	for(ll i=2; i*i<=(n+1); i++) {
		if(v[i]) {
			for(ll j=i*i; j<=(n+1); j+=i) {
				v[j] = false;
			}
		}
	}

	if(n < 3) cout << 1 << ln;
	else cout << 2 << ln;

	for(int i=2; i<=(n+1); i++) {
		if(v[i]) cout << 1 << " ";
		else cout << 2 << " ";
	}
	cout << ln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int tc;
    // cin >> tc;
    // while (tc--) {
    //     solve();
    // }
    solve();
    return 0;
}