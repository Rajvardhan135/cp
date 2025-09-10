#include <iostream>
#include <vector>
using namespace std;

void MaximalAnd() {
	int n, k;
	cin >> n >> k;

	vector<int> bits(31, 0);

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;

		for(int j=0; num != 0; j++) {
			if(num & 1) bits[j]++;
			num = num >> 1;
		}
	}

	int ans = 0;

	for(int i=30; i>=0; i--) {
		if(bits[i] == n) ans = ans | (1 << i);
		else if(k -(n - bits[i]) >= 0) {
			ans = ans | (1 << i);
			k -= (n - bits[i]);
		}
	}

	cout << ans << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		MaximalAnd();
	}
}