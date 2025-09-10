#include <iostream>
#include <cmath>
using namespace std;

void StrangePartition() {
	long long n, x, minSum=0, maxSum=0;
	cin >> n >> x;

	for(int i=0; i<n; i++) {
		long long num;
		cin >> num;
		maxSum += ceil(num * 1.0/ x);
		minSum += num;
	}

	minSum = ceil(minSum * 1.0 / x);

	cout << minSum << " " << maxSum << endl;

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		StrangePartition();
	}
}
