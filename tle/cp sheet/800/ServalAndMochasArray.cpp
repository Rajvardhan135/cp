#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void servalandMochasArray() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin >> a[i];

	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(__gcd(a[i], a[j]) <= 2) {
				cout << "YES" << endl;
				return;
			}
		}
	}

	cout << "NO" << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		servalandMochasArray();
	}
}