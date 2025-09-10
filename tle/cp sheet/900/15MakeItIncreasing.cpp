#include <iostream>
#include <vector>
using namespace std;

void MakeItIncreasing() {
	int n, count = 0;
	vector<int> nums;
	cin >> n;

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		nums.push_back(num);
	}

	for(int i=n-2; i>=0; i--) {
		while(nums[i] >= nums[i+1]) {
			if(nums[i] == 0 && nums[i+1] == 0) {
				cout << -1 << endl;
				return;
			} else if(nums[i] == 0) break;
			nums[i] /= 2;
			count++;
		}
	}

	cout << count << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		MakeItIncreasing();
	}
}