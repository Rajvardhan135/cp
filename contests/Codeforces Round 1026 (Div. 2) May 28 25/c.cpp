#include <iostream>
#include <vector>
using namespace std;

void flightProgram() {
	int n;
	cin >> n;
	vector<int> d;
	for(int i=0; i<n; i++) {
		int di;
		cin >> di;
		d.push_back(di);
	}
	int l1=0, r1=0;
	int l2, r2;
	for(int i=0; i<n; i++) {
		cin >> l2 >> r2;
		int newL = max(l1, l2);
		int newR = min(r1, r2);
		cout << l1 << " " << l2 << " " << newL << " " << newR << " ";
		if(newL > newR) {
			cout << -1 << endl;
			return;
		} 
		l1 = newL, r1 += d[i] == 0 ? 0 : 1;
	}
	cout << "YES" << endl;
}

int main() {
	int tc;
	cin >> tc;

	while(tc--) {
		flightProgram();
	}
}