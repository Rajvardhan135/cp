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
	int n, prevOP = 0, l = 1, r, prev;
	string action = "L";
	vector<int> nums;

	cin >> n;
	r = n - 1;

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		nums.push_back(num);
	}

	prev = nums[0];

	while(l <= r) {
		if(nums[l] == prev) {
			action += 'L';
			l++;
		} else if(nums[r] == prev) {
			action += 'R';
			r--;
		} else if(nums[r] > prev && nums[l] > prev) {
			if(nums[l] > nums[r]) {
				action += 'L';
				prev = nums[l];
				l++;
			} else {
				action += 'R';
				prev = nums[r];
				r--;
			}
			prevOP = 1;
		} else if(nums[l] < prev && nums[r] < prev) {
			if(nums[l] < nums[r]) {
				action += 'L';
				prev = nums[l];
				l++;
			} else {
				action += 'R';
				prev = nums[r];
				r--;
			}
			prevOP = 0;
		} else {
			if(prevOP == 0) {
				if(nums[l] > nums[r]) {
					action += 'L';
					prev = nums[l];
					l++;
				} else {
					action += 'R';
					prev = nums[r];
					r--;
				}
				prevOP = 1;
			} else {
				if(nums[l] < nums[r]) {
					action += 'L';
					prev = nums[l];
					l++;
				} else {
					action += 'R';
					prev = nums[r];
					r--;
				}
				prevOP = 0;
			}
		}
	}

	cout << action << ln;
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