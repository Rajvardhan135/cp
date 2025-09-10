#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void Raspberries() {
	int n, k, ans = 6, numOfEve = 0;
	vector<int> nums;

	cin >> n >> k;

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		nums.push_back(num);
		if(num % 2 == 0) numOfEve++;
	}

	for(int i=0; i<n; i++) {
		if(nums[i] % k == 0) {
			cout << 0 << endl;
			return;
		}
	}

	if(k == 4) {
		if(numOfEve > 1) {
			cout << 0 << endl;
			return;
		}
		else if(numOfEve == 1) {
			cout << 1 << endl;
			return;
		} else {
			ans = 2;
		}
	} else if(k == 2) {
		cout << 1 << endl;
		return;
	} 

	for(int i=0; i<n; i++) {
		ans = min(ans, (k - nums[i] % k));
	}
	cout << ans << endl;
	return;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		Raspberries();
	}
}
