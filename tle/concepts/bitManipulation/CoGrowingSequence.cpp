#include <iostream>
#include <vector>
using namespace std;

void CoGrowingSequence() {
	vector<int> x, y;
	int n, x0;
	cin >> n;

	cin >> x0;
	x.push_back(x0);
	y.push_back(0);

	for(int i=1; i<n; i++) {
		int xi;
		cin >> xi;
		int yi = (x[i-1] ^ y[i-1]) ^ xi;
		x.push_back(xi);
		y.push_back(yi);
		
	}

	for(int i=0; i<n; i++) {
		cout << y[i] << " ";
	}

	cout << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		CoGrowingSequence();
	}
}