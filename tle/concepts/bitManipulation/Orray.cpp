#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cstdint>
#include <bits/stdc++.h>
using namespace std;

void Orray() {
	int n;
	array<unordered_set<int>, 31> mp;
	unordered_map<int, int> nums;
	vector<int> ans;
	bitset<31> marked;

	cin >> n;
	ans.reserve(n);

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		nums[num]++;

		if(nums[num] == 1) {
			int x = num;
			for(int i=0; x != 0; i++) {
				if(x & 1) {
					mp[i].insert(num);
				}
				x = x >> 1;
			}
		}
	}

	int sum = 0;
	for(int i=30; i>=0; i--) {
		if(marked[i] == 0) {
			int mx = 0;
			int ele = -1;
			for(int val : mp[i]) {
				int ornum = (val | sum);
				if(nums[val] > 0 && (ornum > mx)) {
					mx = ornum;
					ele = val;
				}
			}
			if(ele != -1) {
				nums[ele]--;
				ans.emplace_back(ele);
				sum = sum | ele;
				
				for(int j=0; ele != 0; j++) {
					if(ele & 1) {
						marked[j] = 1;
					}
					ele = ele >> 1;
				}

			}
		}
	}

	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}

	for(const auto &[key, value] : nums) {
		for(int i=0; i<value; i++) cout << key << " ";
	}

	cout << "\n";

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tc;
	cin >> tc;
	while(tc--) {
		Orray();
	}
}
