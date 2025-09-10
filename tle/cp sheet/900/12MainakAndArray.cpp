#include <iostream>
#include <vector>
using namespace std;

void MainakAndArray() {
	int n;
	vector<int> nums;
	cin >> n;

	if(n == 0) {
		cout << 0 << endl;
		return;
	}

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		nums.push_back(num);
	}

	int greatest = 0;

	for(int i=1; i<n; i++) {
		greatest = max(nums[i], greatest);
	}

	int smallest = 1000;

	for(int i=n-2; i>=0; i--) {
		smallest = min(nums[i], smallest);
	}

	int maxDiff = nums[n-1] - nums[0];

	for(int i=0; i<n-1; i++) {
		maxDiff = max(maxDiff, (nums[i]-nums[i+1]));
	}

	int answer = max(maxDiff, max(greatest - nums[0], nums[n-1] - smallest));
	cout << answer << endl;

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		MainakAndArray();
	}
}