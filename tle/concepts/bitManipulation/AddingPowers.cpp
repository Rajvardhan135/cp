#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

void AddingPowers() {
	long long n, k;
	map<long long, long long> mp;
	cin >> n >> k;

	long long x = pow(2ll, 53ll);

	vector<long long> nums(n);
	for(int i=0; i<n; i++) {
		cin >> nums[i];
	}

	for(int j=0; j<n; j++) {
		long long num = nums[j];
		if(num == 0) continue;
		long long i = 0;
		while(pow(k, i) <= num) i++;
		i--;
		while(i >= 0 && num != 0) {
			long long a = pow(k, i);
			if(a <= num) {
				if(mp.find(i) != mp.end()) {
					cout << "NO" << endl;
					return;
				}
				num -= a;
				mp[i]++;
			}
			i--;
		}
		if(num != 0) {
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES" << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		AddingPowers();
	}
}