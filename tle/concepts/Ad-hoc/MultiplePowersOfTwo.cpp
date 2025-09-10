#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

bool isDivisibleByPowOfTwo(long long num, map<int, int> &mp) {
	long long ind = 0;
	while(pow(2, ind) < num && num % pow(2, ind) == 1) {
		ind++;
	}
	return num % pow(2, ind) == 0;
}

int main() {
	int n, q;
	cin >> n >> q;
	vector<long long> nums(n);
	for(auto &it:nums) cin >> it;
	map<int, int> mp;
	for(int i=0; i<n; i++) {
		if(nums[i] % 2 == 0 && isPowOfTwo(nums[i], mp)) {
			mp[nums[i]] = 0;
		}
	}

	while(q--) {
		int ind;
		cin >> ind;
		int val = pow(2, ind);
		if(mp.find(val) != mp.end()) mp[val] = val-1;
	}

	for(int i=1; i<n; i++) {
		if(mp.find(nums[i]) && mp[nums[i]] != -1) {
			nums[i] += mp[nums[i]];
		}
	}
}