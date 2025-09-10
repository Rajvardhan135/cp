#include <iostream>
#include <cmath>
using namespace std;

void walkingMaster() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if(d < b || (c - abs(d - b)) > a) {
		cout << -1 << endl;
		return;
	}

	cout << (a - (c - abs(d - b)) + abs(d - b)) << endl;

}

int main() {
	int tc;
	cin >> tc;

	while(tc--) {
		walkingMaster();
	}
}