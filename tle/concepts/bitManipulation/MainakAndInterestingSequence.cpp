#include <iostream>
using namespace std;

void MainakSeq() {
	int n, m;
	cin >> n >> m;

	if(n > m ||(!(n & 1) && (m & 1))) {
		cout << "No" << endl;
		return;
	}

	cout << "Yes" << endl;
	if(n & 1) {
		for(int i=0; i < n-1; i++) {
			cout << 1 << " ";
		}
		cout << (m - (n - 1)) << endl;
	} else {
		for(int i=0; i < n-2; i++) {
			cout << 1 << " ";
		}
		int num = (m - (n - 2)) / 2;
		cout << num << " " << num << endl;
	}
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		MainakSeq();
	}
}