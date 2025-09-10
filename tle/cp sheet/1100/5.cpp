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
	vector<ll> nums(n+1, 0), pre(n+1, 0);
	for(int i=1; i<=n; i++) cin >> nums[i];
	for(int i=1; i<=n; i++) pre[i] = pre[i-1] + nums[i];

	// for(int i=1; i<=n; i++) cout << pre[i] << " ";

	ll maxEle = *max_element(nums.begin()+1, nums.end());
	ll minEle = *min_element(nums.begin()+1, nums.end());

	// cout << minEle << " " << maxEle << ln;

	ll maxDiff = maxEle - minEle;

	for(int i=2; i*i<=n; i++) {
		if(n % i > 0) continue;
		ll maxVal = pre[i];
		ll minVal = pre[i];

		int k = i;
		for(int j=k+k; j<=n; j+=k) {
			if(pre[j] - pre[j-k] < minVal) minVal = pre[j] - pre[j-k];
			else if(pre[j] - pre[j-k] > maxVal) maxVal = pre[j] - pre[j-k];
		}

		// cout << k << " " << minVal << " " << maxVal << ln;

		maxDiff = max(maxDiff, maxVal - minVal);

		k = n / i;
		maxVal = pre[k];
		minVal = pre[k];

		for(int j=k+k; j<=n; j+=k) {
			if(pre[j] - pre[j-k] < minVal) minVal = pre[j] - pre[j-k];
			else if(pre[j] - pre[j-k] > maxVal) maxVal = pre[j] - pre[j-k];
		}

		// cout << k << " " << minVal << " " << maxVal << ln;

		maxDiff = max(maxDiff, maxVal - minVal);
	}

	cout << maxDiff << ln;
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