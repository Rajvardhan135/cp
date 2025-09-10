#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void SumOfMedians() {
	int n, k, s;
	vector<long long> nums;
	cin >> n >> k;

	s = n * k;

	nums.push_back(0);

	for(int i=0; i<s; i++) {
		long long num;
		cin >> num;
		nums.push_back(num);
	}	

	int incr = ceil((double)n / (double)2) - 1;
	int decr = ceil((double)n / (double)2) + (n % 2 == 0 ? 1 : 0);

	int l = incr, r = s - decr + 1;
	long long ans = 0;

	while(l <= r) {
		ans += nums[r];
		l += incr;
		r -= decr;
	}

	cout << ans << endl;

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		SumOfMedians();
	}
}