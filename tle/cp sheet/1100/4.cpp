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
	vector<int> nums(n);
	for(int i=0; i<n; i++) cin >> nums[i];

	int l = 0, r = 1, sum = nums[0], maxSum = max(-1000, nums[0]);

	while(r < n) {
		if(sum < 0) {
			sum -= nums[l];
			l++;
			if(r < l) r = l;
		} else if((nums[r] & 1) == (nums[r-1] & 1)) {
			maxSum = max(nums[r], maxSum);
			sum = nums[r];
			l = r;
			r++;
		} else {
			sum += nums[r];
			r++;
			maxSum = max(sum, maxSum);
		}
	}
	
	cout << maxSum << ln;

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