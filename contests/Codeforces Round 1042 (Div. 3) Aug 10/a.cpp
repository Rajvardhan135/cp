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
	vector<int> a(n), b(n);
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++) cin >> b[i];

	int count = 0;
	
	while(true) {
		count++;
		int i = 0;
		for(; i<n; i++) {
			if(a[i] > b[i]) break;
		}
		if(i == n) break;
		a[i]--;
		for(int j=0; j<n; j++) {
			if(a[j] < b[j]) {
				a[j]++;
				break;
			}
		}
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