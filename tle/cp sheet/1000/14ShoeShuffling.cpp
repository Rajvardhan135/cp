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
	vector<int> ans, nums(n);

	for(int i=0; i<n; i++) cin >> nums[i];

	int l = 0;
	while(l < n) {
		int r = l+1;
		while(r < n && nums[r] == nums[l]) r++;
		if(r-l == 1) {
			cout << -1 << ln;
			return;
		}
		ans.push_back(r);
		l++;
		for(; l<r; l++) {
			ans.push_back(l);
		}
	}

	for(int i=0; i<n; i++) {
		cout << ans[i] << " ";
	}
	cout << ln;
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