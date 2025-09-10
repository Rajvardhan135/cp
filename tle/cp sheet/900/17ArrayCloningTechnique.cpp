#include <iostream>
#include <map>
#include <cmath>
using namespace std;

void ArrayCloningTechnique() {
	int n;
	map<int, int> mp;
	cin >> n;

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		mp[num]++;
	}

	int largest = 0;
	for(auto m : mp) {
		largest = max(largest, m.second);
	}

	int ops = 0;

	while(largest != n) {
		ops += (min(n-largest, largest) + 1);
		largest += min(n-largest, largest);
		
	}

	cout << ops << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		ArrayCloningTechnique();
	}
}
