#include <iostream>
#include <vector>
using namespace std;

void MakeItZero() {
	int n;
	cin >> n;

	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
	}

	if(n % 2 == 0) {
		cout << 2 << endl;
		cout << 1 << " " << n << endl;
		cout << 1 << " " << n << endl;
	} else {
		cout << 4 << endl;
		cout << 1 << " " << n - 1 << endl;
		cout << 1 << " " << n - 1 << endl;
		cout << n - 1 << " " << n << endl;
		cout << n - 1 << " " << n << endl;
	}
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		MakeItZero();
	}
}
