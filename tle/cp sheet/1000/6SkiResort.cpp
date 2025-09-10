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
	int n, k, q;
	long long ans=0;
	cin >> n >> k >> q;
	vector<int> nums(n);
	for(int i=0; i<n; i++) cin >> nums[i];

	int l=0; int r=0;
	
	while(l < n) {
		if(nums[l] > q) l++;
		else {
			r = l;
			while(r < n && nums[r] <= q) r++;
			// cout << l << " " << r << ln;
			while(r-l >= k) {
				ans += r - (l + k - 1);
				l++;
			}
			l = r;
		}
	}

	cout << ans << ln;
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