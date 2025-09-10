#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void JohnnyAndHisHobbies() {
	int n;
	cin >> n;

	vector<int> nums(n);
	set<int> s;

	for(int i=0; i<n; i++) {
		cin >> nums[i];
		s.insert(nums[i]);
	}

	for(int i=1; i<=1024; i++) {
		int j=0;
		for(; j<n; j++) {
			int num = nums[j] ^ i;
			if(!s.count(num)) break;
		}
		if(j == n) {
			cout << i << endl;
			return;
		}
	}

	cout << -1 << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		JohnnyAndHisHobbies();
	}
}
