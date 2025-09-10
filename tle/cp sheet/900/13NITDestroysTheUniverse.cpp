#include <iostream>
#include <vector>
using namespace std;

void NITDestroysTheUniverse() {
	int n;
	vector<int> nums;
	cin >> n;

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		nums.push_back(num); 
	}

	int l = 0, h = n - 1;

	while(l < n && nums[l] == 0) l++;
	while(h >= 0 && nums[h] == 0) h--;

	if(l == n && h == -1) cout << 0 << endl;
	else {
		for(int i=l; i<h; i++) if(nums[i] == 0) {
			 cout << 2 << endl;
			 return;
		}
		cout << 1 << endl;
	}

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		NITDestroysTheUniverse();
	}
}