#include <iostream>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		int n;
		cin >> n;
		vector<int> a;

		for(int i=0; i<n; i++) {
			int ai;
			cin >> ai;
			a.push_back(ai);
		}
		
		int minDiff = a[1] - a[0];
		
		for(int i=2; i<n; i++) {
			minDiff = min(minDiff, a[i]-a[i-1]);
		}

		if(minDiff < 0) cout << 0 << endl;
		else cout << (minDiff / 2) + 1 << endl;

	}

	return 0;
}