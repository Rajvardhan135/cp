#include <iostream>
#include <vector>
using namespace std;

int minimumOperations() {
	int n; cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		v[i] = num;
	}
	int maxFreq = 1;
	for(int i=1; i<n; i++) {
		int freq = 1;
		while(i < n && v[i] == v[i-1]) {
			freq++;
			i++;
		}
		maxFreq = max(maxFreq, freq);
	}

	return n - maxFreq;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		int operations = minimumOperations();
		cout << operations << endl;
	}

	return 0;
}