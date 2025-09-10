#include <iostream>
using namespace std;

void MakingAp() {
	int a, b, c, i, d1, d2, x1, x2, x3;
	cin >> a >> b >> c;
	
	d1 = c - b;
	d2 = b - a;

	x1 = b - d1;
	x2 = b + d2;

	if(x1 > 0 && x1 % a == 0) cout << "YES" << endl;
	else if(x2 > 0 && x2 % c == 0) cout << "YES" << endl;
	else {
		x3 = a + c;
		if(x3 % 2 == 0 && (x3 / 2) % b == 0) cout << "YES" << endl;
		else cout << "NO" << endl; 
	}

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		MakingAp();
	}
}