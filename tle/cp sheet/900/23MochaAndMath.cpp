#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void MochaAndMath() {
	int n, ans;
	vector<long long> nums;
	cin >> n;

	for(int i=0; i<n; i++) {
		long long num;
		cin >> num;
		if(i == 0) ans = num & num;
		else ans = ans & num;
	}

	cout << ans << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		MochaAndMath();
	}
}