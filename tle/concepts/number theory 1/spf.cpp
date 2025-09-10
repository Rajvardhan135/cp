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
	vector<int> v(n+1);
	for(int i=0; i<=n; i++) v[i] = i;

	for(int i=2; i<=n; i++) {
		if(v[i] == i) {
			for(int j=i*i; j<=n; j+=i) {
				v[j] = i;
				if(j == n) {
					cout << i << ln;
					return;
				}
			}
		}
	}

	cout << n << ln;
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