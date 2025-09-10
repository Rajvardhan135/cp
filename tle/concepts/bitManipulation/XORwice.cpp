#include <iostream>
using namespace std;

void XORwice() {
	int a, b;
	cin >> a >> b;
	cout << (a ^ b) << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		XORwice();
	}
}