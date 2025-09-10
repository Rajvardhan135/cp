#include <iostream>
using namespace std;

void twinPermutation() {
	int n;
	cin >> n;
	int target = n + 1;
	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		cout << target - num << " ";
	}
	cout << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		twinPermutation();
	}
}