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
	int n, minNum = 1e9;
	cin >> n;
	vector<int> nums(n);
	for(int i=0; i<n; i++) {
		cin >> nums[i];
		minNum = min(minNum, nums[i]);
	}
	vector<int> temp = nums;
	sort(temp.begin(), temp.end());
	for(int i=0; i<n; i++) {
		if(nums[i] != temp[i]) {
			if(nums[i] % minNum != 0) {
				cout << "NO" << ln;
				return;
			}
		}
	}
	cout << "YES" << ln;
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