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

int findGcd(vector<int> &nums) {
	int res = 0;
	for(int i=0; i<nums.size(); i++) {
		res = __gcd(res, nums[i]); 
	}
	return res;
}

int findLcm(vector<int> nums) {
	int n = nums.size();
	if(n == 0) return -1;
	if(n == 1) return nums[0];

	int res = (nums[0] * nums[1]) / __gcd(nums[0], nums[1]);

	for(int i=2; i<n; i++) {
		res = (res * nums[i]) / __gcd(res, nums[i]);
	}

	return res;
}

void solve() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i=0; i<n; i++) cin >> nums[i];

	cout << "GCD: " << findGcd(nums) << ln;
	cout << "LCM: " << findLcm(nums) << ln;


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