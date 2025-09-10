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
	vector<vector<ll>> nums(n);

	int minF = 0, minS = 0;
	ll ans = 0;

	for(int i=0; i<n; i++) {
		nums[i] = {1000000000, 1000000000};
		int m;
		cin >> m;
		for(int j=0; j<m; j++) {
			int num;
			cin >> num;
			if(nums[i][0] > num) {
				nums[i][1] = nums[i][0];
				nums[i][0] = num;
			} else if(nums[i][1] > num) {
				nums[i][1] = num;
			}
		}

		ans += nums[i][1];
		if(nums[i][0] < nums[minF][0]) minF = i;
		if(nums[i][1] < nums[minS][1]) minS = i;
	}

	// cout << ans << " " << minF << " " << minS << " ";

	ans -= nums[minS][1];
	ans += nums[minF][0];

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