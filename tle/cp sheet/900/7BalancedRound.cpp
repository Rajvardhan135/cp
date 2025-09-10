#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

void BalancedRound() {
	int n, k;
	vector<int> nums;

	cin >> n >> k;

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		nums.push_back(num);
	}

	sort(nums.begin(), nums.end());

	int maxCount = 1, count = 1;

	for(int i=1; i<n; i++) {
		if(abs(nums[i] - nums[i-1]) <= k) {
			count++;
			maxCount = max(count, maxCount);
		} else {
			count = 1;
		}
	}

	cout << n - maxCount << endl;

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		BalancedRound();
	}
}