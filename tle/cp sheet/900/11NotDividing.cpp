#include <iostream>
#include <vector>
using namespace std;

void NotDividing() {
	int n;
	vector<int> nums;
	cin >> n;

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		if(num == 1) num++;
		nums.push_back(num);
	}

	for(int i=0; i<n-1; i++) {
		if(nums[i+1] % nums[i] == 0) {
			nums[i+1]++;
		}
	}


	for(int i=0; i<n; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
}

int main() {
	int tc;
	cin >> tc;

	while(tc--) {
		NotDividing();
	}
}